/*
 * Copyright (C) Shinpei Kato
 *
 * University of California, Santa Cruz
 * Systems Research Lab.
 *
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "gdev_device.h"
#include "gdev_sched.h"
#include "gdev_system.h"

struct gdev_sched_entity *sched_entity_ptr[GDEV_CONTEXT_MAX_COUNT] = {
	[0 ... GDEV_CONTEXT_MAX_COUNT-1] = NULL
};


// The function for computing a single task or a combined set of tasks' utilization.
/*int compute_utilization(void *main_task)
{
	return 0;
}*/

int compute_utilization(/*struct gdev_task*/void *main_kernel, /*struct gdev_task*/void *second_kernel )
{
	return 1;
}

/**
 * The function to add a task to an existing sched_entity entities.
 */
void gdev_sched_merge_entities(struct gdev_sched_entity *entry, struct gdev_task *task)
{
	int i=0;
	if(!entry)
		return;
	while(entry->async_tasks[i])
	{
		i++;
	}
	if (i>9)
		return;
	entry->async_tasks[i] = task;
	GDEV_DPRINT("Async task %d was set.\n",i);
}

/**
 * initialize the local scheduler for the device.
 */
int gdev_init_scheduler(struct gdev_device *gdev)
{
	struct gdev_device *phys = gdev->parent;

	/* create scheduler threads. OS runtime and user-space runtime behave
	   differently on this function call. */
	gdev_sched_create_scheduler(gdev);

	/* set up virtual GPU schedulers, if required. */
	if (phys) {
		gdev_lock(&phys->sched_com_lock);
		gdev_list_init(&gdev->list_entry_com, (void*)gdev);
		gdev_list_add(&gdev->list_entry_com, &phys->sched_com_list);
		gdev_unlock(&phys->sched_com_lock);
		gdev_replenish_credit_compute(gdev);

		gdev_lock(&phys->sched_mem_lock);
		gdev_list_init(&gdev->list_entry_mem, (void*)gdev);
		gdev_list_add(&gdev->list_entry_mem, &phys->sched_mem_list);
		gdev_unlock(&phys->sched_mem_lock);
		gdev_replenish_credit_memory(gdev);
	}
	int i;
	/*for(i=0; i<GDEV_CONTEXT_MAX_COUNT; i++)
		sched_entity_ptr[i] = malloc(sizeof(struct gdev_sched_entity*));

	GDEV_PRINT("Initializing the scheduler.\n");*/

	return 0;
}

/**
 * finalized the local scheduler for the device.
 */
void gdev_exit_scheduler(struct gdev_device *gdev)
{
	struct gdev_device *phys = gdev->parent;

	if (phys) {
		gdev_lock(&phys->sched_com_lock);
		if (!gdev_list_empty(&gdev->list_entry_com))
			gdev_list_del(&gdev->list_entry_com);
		gdev_unlock(&phys->sched_com_lock);
		
		gdev_lock(&phys->sched_mem_lock);
		if (!gdev_list_empty(&gdev->list_entry_mem))
			gdev_list_del(&gdev->list_entry_mem);
		gdev_unlock(&phys->sched_mem_lock);
	}

	gdev_sched_destroy_scheduler(gdev);
}

/**
 * create a new scheduling entity.
 */
struct gdev_sched_entity *gdev_sched_entity_create(struct gdev_device *gdev, gdev_ctx_t *ctx, void *kernel)
{
	struct gdev_sched_entity *se;
	GDEV_DPRINT("Entering traditional gdev_sched_entity creation.\n");
	if (!(se= gdev_sched_entity_alloc(sizeof(*se))))
		return NULL;

	/* set up the scheduling entity. */
	se->task = malloc(sizeof(*se->task));
	GDEV_DPRINT("Setting gdev.\n");
	se->gdev = gdev;
	GDEV_DPRINT("Setting current task.\n");
	se->task->sys_task = gdev_sched_get_current_task();
	if(kernel)
	{
		GDEV_DPRINT("Setting kernel.\n");
		se->task->kernel = kernel;
	}
	se->ctx = ctx;
	se->prio = gdev_sched_get_static_prio(se->task->sys_task);
	se->rt_prio = GDEV_PRIO_DEFAULT;
	se->launch_instances = 0;
	se->memcpy_instances = 0;
	gdev_list_init(&se->list_entry_com, (void*)se);
	gdev_list_init(&se->list_entry_mem, (void*)se);
	gdev_time_us(&se->last_tick_com, 0);
	gdev_time_us(&se->last_tick_mem, 0);
	sched_entity_ptr[gdev_ctx_get_cid(ctx)] = se;
	//GDEV_PRINT("The scheduling array entity was set to %x.\n", se);
	GDEV_DPRINT("sched entity ptr with index %d was set to %x.\n", gdev_ctx_get_cid(ctx),se);
	/* Initialize the performance metrics */
	se->blockDIM = 0;
	se->gridDIM  = 0;
	se->mem_size = 0;

	return se;
}


struct gdev_sched_entity *gdev_sched_entity_create_smart(struct gdev_device *gdev, gdev_ctx_t *ctx, void *kernel, int kernel_category)
{
	/* Flag to indicate that a best match is found */
	 int found_flag = 0;
	 int kernel_flag = 0;

	/* Search through all the existing scheduling entities in sched_entity_ptr to find the perfect match. */
	 GDEV_DPRINT("Creating gdev_sched_entity in smart mode.\n");
	 int max = 0;
	 struct gdev_task current_task;
	 struct gdev_task *tmp_tsk;


	 struct gdev_sched_entity *best_se_match = malloc(sizeof(*best_se_match));
	 struct gdev_sched_entity *tmp_se = malloc(sizeof(*tmp_se));
	 struct gdev_sched_entity *se = malloc(sizeof(*se));
	 int i = 0;
	 int diff;
	 current_task.sys_task = gdev_sched_get_current_task();
	 if(kernel)
	 {
		 current_task.kernel = kernel;
		 GDEV_DPRINT("Setting kernel to %x.\n",kernel);
		 kernel_flag = 1;
	 }
	 else
	 {
		 GDEV_DPRINT("Error, no kernel is given.\n");
	 }
	 GDEV_DPRINT("Done getting the current task and setting the kernel.\n");
	 for( i=0; i < GDEV_CONTEXT_MAX_COUNT-1 ; i++)
	 {
		if(gdev->flag_first)
		{
			gdev->flag_first = 0;
			GDEV_DPRINT("This is first.\n");
			if(gdev->flag_first == 0)
				GDEV_DPRINT("The flag_first was set.\n");
			break;
		}

		//printf("Not first anymore.\n");
		tmp_se = sched_entity_ptr[i];
		if(!tmp_se)
		{
			//GDEV_PRINT("sched entity is not set.\n");
			continue;
		}
		GDEV_DPRINT("sched entity is set.\n");
		/*tmp_tsk = tmp_se->task;
		if(!tmp_tsk)
			continue;*/
		/*if(!tmp_tsk->kernel)
		{
			continue;
		}*/
		GDEV_DPRINT("Found an existing task. The pointer is %x for sched_entity.\n",tmp_se);
		GDEV_DPRINT("Computing the new utilization.\n");
		//diff = compute_utilization( kernel , tmp_tsk->kernel) - compute_utilization(tmp_tsk->kernel, NULL);
		if( /*diff > max*/ true)
		{
			found_flag = 1;
			max = diff;
			best_se_match = tmp_se;
		}


		GDEV_DPRINT("A sched entity already exists and it is the %dth one.\n",i);

		 //gdev_sched_merge_entities(best_se_match, &current_task);
		 found_flag = 1; best_se_match = tmp_se;//debug

	 }

	 /* Then add it to its async_tasks */
	 if(found_flag)
	 {
		 	 GDEV_DPRINT("Got the best match. It is %x\n",best_se_match);
		 	 GDEV_DPRINT("Merging tasks.\n");
		 	 gdev_sched_merge_entities(best_se_match, &current_task);
		 	 GDEV_DPRINT("Done merging tasks.\n");
		 	 se = best_se_match;
	 }
	 else
	 {
	 /* Otherwise */
		 GDEV_DPRINT("Couldn't find a best match. Continuing with normal sched_entity creations.\n");
		 /*for( i=0; i < GDEV_CONTEXT_MAX_COUNT-1 ; i++)
			 {
				tmp_se = sched_entity_ptr[i];
				if(!tmp_se)
				{
					tmp_se = malloc(sizeof(struct gdev_sched_entity));
					tmp_se->task = malloc(sizeof(struct gdev_task));
					tmp_se->task->sys_task = current_task.sys_task;
					tmp_se->task->kernel = malloc(sizeof(struct gdev_kernel));
					printf("Allocated the current task to %x.\n",tmp_se);
					sched_entity_ptr[i] = tmp_se;
					break;
				}
			 }*/
		 se = gdev_sched_entity_create(gdev,ctx,kernel);
	 }
	se->gdev = gdev;
	GDEV_DPRINT("Returning from sched entity creation.\n");
	return se;
}

/**
 * destroy the scheduling entity.
 */
void gdev_sched_entity_destroy(struct gdev_sched_entity *se)
{
	FREE(se);
}

/**
 * insert the scheduling entity to the priority-ordered compute list.
 * gdev->sched_com_lock must be locked.
 */
static void __gdev_enqueue_compute(struct gdev_device *gdev, struct gdev_sched_entity *se)
{
	struct gdev_sched_entity *p;

	gdev_list_for_each (p, &gdev->sched_com_list, list_entry_com) {
		if (se->prio > p->prio) {
			gdev_list_add_prev(&se->list_entry_com, &p->list_entry_com);
			break;
		}
	}
	if (gdev_list_empty(&se->list_entry_com))
		gdev_list_add_tail(&se->list_entry_com, &gdev->sched_com_list);
}

/**
 * delete the scheduling entity from the priority-ordered compute list.
 * gdev->sched_com_lock must be locked.
 */
static void __gdev_dequeue_compute(struct gdev_sched_entity *se)
{
	gdev_list_del(&se->list_entry_com);
}

/**
 * insert the scheduling entity to the priority-ordered memory list.
 * gdev->sched_mem_lock must be locked.
 */
static void __gdev_enqueue_memory(struct gdev_device *gdev, struct gdev_sched_entity *se)
{
	struct gdev_sched_entity *p;

	gdev_list_for_each (p, &gdev->sched_mem_list, list_entry_mem) {
		if (se->prio > p->prio) {
			gdev_list_add_prev(&se->list_entry_mem, &p->list_entry_mem);
			break;
		}
	}
	if (gdev_list_empty(&se->list_entry_mem))
		gdev_list_add_tail(&se->list_entry_mem, &gdev->sched_mem_list);
}

/**
 * delete the scheduling entity from the priority-ordered memory list.
 * gdev->sched_mem_lock must be locked.
 */
static void __gdev_dequeue_memory(struct gdev_sched_entity *se)
{
	gdev_list_del(&se->list_entry_mem);
}

/**
 * scheduling policy files.
 */
#include "gdev_vsched_band.c"
#include "gdev_vsched_credit.c"
#include "gdev_vsched_fifo.c"
#include "gdev_vsched_null.c"

#define GDEV_VSCHED_POLICY_BAND
//#define GDEV_VSCHED_POLICY_CREDIT
//#define GDEV_VSCHED_POLICY_FIFO
//#define GDEV_VSCHED_POLICY_NULL

#if defined(GDEV_VSCHED_POLICY_BAND)
struct gdev_vsched_policy *gdev_vsched = &gdev_vsched_band;
#elif defined(GDEV_VSCHED_POLICY_CREDIT)
struct gdev_vsched_policy *gdev_vsched = &gdev_vsched_credit;
#elif defined(GDEV_VSCHED_POLICY_FIFO)
struct gdev_vsched_policy *gdev_vsched = &gdev_vsched_fifo;
#elif defined(GDEV_VSCHED_POLICY_NULL)
struct gdev_vsched_policy *gdev_vsched = &gdev_vsched_null;
#endif

/**
 * schedule compute calls.
 */
void gdev_schedule_compute(struct gdev_sched_entity *se, int TEST_RUNTIME)
{
	struct gdev_device *gdev = se->gdev;

	GDEV_DPRINT("Scheduler: gdev is %d.\n",gdev);
	GDEV_DPRINT("Scheduler: se is %d.\n",se);
	GDEV_DPRINT("Scheduler: TEST_RUNTIME is %d.\n",TEST_RUNTIME);
	if(TEST_RUNTIME == 1)
	{
		gdev_lock(&gdev->sched_com_lock);
		int tmp_BD = se->blockDIM;
		int tmp_GD = se->gridDIM;
		se->blockDIM += 256;
		se->gridDIM = 1;
		gdev_current_com_set(gdev, (void*)se);
		gdev_unlock(&gdev->sched_com_lock);

		gdev_lock(&gdev->sched_com_lock);
		se->blockDIM -= 512;
		gdev_current_com_set(gdev, (void*)se);
		gdev_unlock(&gdev->sched_com_lock);

		se->blockDIM = tmp_BD;
		se->gridDIM = tmp_GD;

	}


resched:
	/* algorithm-specific virtual device scheduler. */
	gdev_vsched->schedule_compute(se);

	GDEV_DPRINT("Scheduler: Schedule compute is done.\n");
	/* local compute scheduler. */

	gdev_lock(&gdev->sched_com_lock);
	GDEV_DPRINT("Scheduler: Inside the lock.\n");
	if ((gdev_current_com_get(gdev) && gdev_current_com_get(gdev) != se) || se->launch_instances >= GDEV_INSTANCES_LIMIT) {
		/* enqueue the scheduling entity to the compute queue. */
		__gdev_enqueue_compute(gdev, se);
		GDEV_DPRINT("Scheduler: Inside the lock.\n");
		gdev_unlock(&gdev->sched_com_lock);

		/* now the corresponding task will be suspended until some other tasks
		   will awaken it upon completions of their compute launches. */
		gdev_sched_sleep();

		goto resched;
	}
	else {
		/* now, let's get offloaded to the device! */
		if (se->launch_instances == 0) {
			/* record the start time. */
			gdev_time_stamp(&se->last_tick_com);
		}
		se->launch_instances++;
		gdev_current_com_set(gdev, (void*)se);
		gdev_unlock(&gdev->sched_com_lock);
	}


	GDEV_DPRINT("Scheduler: Blocking new context.\n");
	/* this function call will block any new contexts to be created during
	   the busy period on the GPU. */
	gdev_access_start(gdev);
}




/**
 * schedule the next context of compute.
 * invoked upon the completion of preceding contexts.
 */
void gdev_select_next_compute(struct gdev_device *gdev)
{
	GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: Starting.\n");
	struct gdev_sched_entity *se;
	struct gdev_device *next;
	struct gdev_time now, exec;
	/* We can also run the merge algorithm here as well */
	/* now new contexts are allowed to be created as the GPU is idling. */
	gdev_access_end(gdev);
	GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: access end.\n");
	gdev_lock(&gdev->sched_com_lock);
	se = (struct gdev_sched_entity *)gdev_current_com_get(gdev);
	if (!se) {
		gdev_unlock(&gdev->sched_com_lock);
		GDEV_PRINT("Invalid scheduling entity on Gdev#%d\n", gdev->id);
		GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: Done.\n");
		return;
	}
	GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: Done with getting the se. It is %x.\n", se);
	/* record the end time (update on multiple launches too). */
	gdev_time_stamp(&now);
	/* aquire the execution time. */
	gdev_time_sub(&exec, &now, &se->last_tick_com);

	se->launch_instances--;
	if (se->launch_instances == 0) {
		/* account for the credit. */
		gdev_time_sub(&gdev->credit_com, &gdev->credit_com, &exec);
		/* accumulate the computation time. */
		gdev->com_time += gdev_time_to_us(&exec);

		/* select the next context to be scheduled.
		   now don't reference the previous entity by se. */
		se = gdev_list_container(gdev_list_head(&gdev->sched_com_list));
		/* setting the next entity here prevents lower-priority contexts
		   arriving in gdev_schedule_compute() from being dispatched onto
		   the device. note that se = NULL could happen. */
		gdev_current_com_set( gdev, (void*)se);
		gdev_unlock(&gdev->sched_com_lock);

		/* select the next device to be scheduled. */
		next = gdev_vsched->select_next_compute(gdev);
		if (!next)
		{
			GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: Done.\n");
			return;

		}

		gdev_lock(&next->sched_com_lock);
		/* if the virtual device needs to be switched, change the next
		   scheduling entity to be scheduled also needs to be changed. */
		if (next != gdev) {
		    	gdev_current_com_set( gdev, NULL);
			se = gdev_list_container(gdev_list_head(&next->sched_com_list));
		}

		/* now remove the scheduling entity from the waiting list, and wake
		   up the corresponding task. */
		if (se) {
			__gdev_dequeue_compute(se);
			gdev_unlock(&next->sched_com_lock);

			if (gdev_sched_wakeup(se->task->sys_task) < 0) {
				GDEV_PRINT("Failed to wake up context %d\n", se->ctx->cid);
				GDEV_PRINT("Perhaps context %d is already up\n", se->ctx->cid);
			}
		}
		else
			gdev_unlock(&next->sched_com_lock);
	}
	else
		gdev_unlock(&gdev->sched_com_lock);
	GDEV_DPRINT("GDEV_SELECT_NEXT_COMPUTE: Done.\n");
}

/**
 * automatically replenish the credit of compute launches.
 */
void gdev_replenish_credit_compute(struct gdev_device *gdev)
{
	gdev_vsched->replenish_compute(gdev);
}

/**
 * schedule memcpy-copy calls.
 */
void gdev_schedule_memory(struct gdev_sched_entity *se)
{
	struct gdev_device *gdev = se->gdev;
	GDEV_DPRINT("Scheduler: Got gdev.\n");

#ifndef GDEV_SCHED_MRQ
	GDEV_DPRINT("Scheduler: computing scheduling.\n");
	gdev_schedule_compute(se,0);
	GDEV_DPRINT("Done.\n");
	return;
#endif

resched:
	/* algorithm-specific virtual device scheduler. */
	gdev_vsched->schedule_memory(se);

	/* local memory scheduler. */
	gdev_lock(&gdev->sched_mem_lock);
	if ((gdev->current_mem && gdev->current_mem != se) || se->memcpy_instances >= GDEV_INSTANCES_LIMIT) {
		/* enqueue the scheduling entity to the memory queue. */
		__gdev_enqueue_memory(gdev, se);
		gdev_unlock(&gdev->sched_mem_lock);

		/* now the corresponding task will be suspended until some other tasks
		   will awaken it upon completions of their memory transfers. */
		gdev_sched_sleep();

		goto resched;
	}
	else {
		/* now, let's get offloaded to the device! */
		if (se->memcpy_instances == 0) {
			/* record the start time. */
			gdev_time_stamp(&se->last_tick_mem);
		}
		se->memcpy_instances++;
		gdev->current_mem = (void*)se;
		gdev_unlock(&gdev->sched_mem_lock);
	}

	gdev_access_start(gdev);
}

/**
 * schedule the next context of memory copy.
 * invoked upon the completion of preceding contexts.
 */
void gdev_select_next_memory(struct gdev_device *gdev)
{
	struct gdev_sched_entity *se;
	struct gdev_device *next;
	struct gdev_time now, exec;

#ifndef GDEV_SCHED_MRQ
	gdev_select_next_compute(gdev);
	return;
#endif

	gdev_access_end(gdev);

	gdev_lock(&gdev->sched_mem_lock);
	se = (struct gdev_sched_entity *)gdev->current_mem;
	if (!se) {
		gdev_unlock(&gdev->sched_mem_lock);
		GDEV_PRINT("Invalid scheduling entity on Gdev#%d\n", gdev->id);
		return;
	}

	/* record the end time (update on multiple launches too). */
	gdev_time_stamp(&now);
	/* aquire the execution time. */
	gdev_time_sub(&exec, &now, &se->last_tick_mem);

	se->memcpy_instances--;
	if (se->memcpy_instances == 0) {
		/* account for the credit. */
		gdev_time_sub(&gdev->credit_mem, &gdev->credit_mem, &exec);
		/* accumulate the memory transfer time. */
		gdev->mem_time += gdev_time_to_us(&exec);

		/* select the next context to be scheduled.
		   now don't reference the previous entity by se. */
		se = gdev_list_container(gdev_list_head(&gdev->sched_mem_list));
		/* setting the next entity here prevents lower-priority contexts 
		   arriving in gdev_schedule_memory() from being dispatched onto
		   the device. note that se = NULL could happen. */
		gdev->current_mem = (void*)se; 
		gdev_unlock(&gdev->sched_mem_lock);

		/* select the next device to be scheduled. */
		next = gdev_vsched->select_next_memory(gdev);
		if (!next)
			return;

		gdev_lock(&next->sched_mem_lock);
		/* if the virtual device needs to be switched, change the next
		   scheduling entity to be scheduled also needs to be changed. */
		if (next != gdev)
			se = gdev_list_container(gdev_list_head(&next->sched_mem_list));

		/* now remove the scheduling entity from the waiting list, and wake 
		   up the corresponding task. */
		if (se) {
			__gdev_dequeue_memory(se);
			gdev_unlock(&next->sched_mem_lock);

			while (gdev_sched_wakeup(se->task->sys_task) < 0) {
				GDEV_PRINT("Failed to wake up context %d\n", se->ctx->cid);
			}
		}
		else
			gdev_unlock(&next->sched_mem_lock);
	}
	else
		gdev_unlock(&gdev->sched_mem_lock);
}

/**
 * automatically replenish the credit of memory copies.
 */
void gdev_replenish_credit_memory(struct gdev_device *gdev)
{
#ifdef GDEV_SCHED_MRQ
	gdev_vsched->replenish_memory(gdev);
#endif
}

