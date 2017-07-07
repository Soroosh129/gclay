#include <cuda.h>
#ifdef __KERNEL__ /* just for measurement */
#include <linux/vmalloc.h>
#include <linux/time.h>
#define printf printk
#define malloc vmalloc
#define free vfree
#define gettimeofday(x, y) do_gettimeofday(x)
#else /* just for measurement */
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#endif

//#include "misc.h"
//#include "mmul.c"
//#include "loop.c"

CUresult res = CUDA_SUCCESS;
CUdevice dev;
CUcontext ctx;


int combined_run(unsigned int n, char *path)
{
	printf("Entering combined run.\n");

	cuInit(0);
	if (res != CUDA_SUCCESS) {
		printf("cuInit failed: res = %lu\n", (unsigned long)res);
		return -1;
	}

	cuDeviceGet(&dev, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuDeviceGet failed: res = %lu\n", (unsigned long)res);
		return -1;
	}
	printf("Got the device.\n");
/*	cuCtxCreate(&ctx, 0, dev, 0, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
*/
	cuCtxCreate(&ctx, 0, dev,0,0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);

/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*/	cuda_test_madd(n,path);

/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_loop(n,path);	
*/
/*	cuCtxCreate(&ctx, 0, dev, 1, 0);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
*/	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);
/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
*/	}
	cuda_test_madd(n,path);

/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*/	cuda_test_madd(n,path);

	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);
/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*/	cuda_test_madd(n,path);

	cuCtxCreate(&ctx, 0, dev, 1, -2);
	printf("Created the context.\n");
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);







/*	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*/	cuda_test_madd(n,path);

	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);

/*	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*/	cuda_test_madd(n,path);

/*
	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
*/
/*	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*//*	cuda_test_mmul(n,path);

	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
*/
/*	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
*//*	cuda_test_mmul(n,path);

	cuCtxCreate(&ctx, 0, dev,1, 0);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_mmul(n,path);
*/



/*	cuCtxCreate(&ctx, 0, dev, 1, -2);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);
	cuCtxCreate(&ctx, 0, dev, 1, -2);
	if (res != CUDA_SUCCESS) {
		printf("cuCtxCreate failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuda_test_madd(n,path);
*/
}

int cuda_test_madd(unsigned int n, char *path)
{
	int i, j, idx;
	CUfunction function;
	CUmodule module;
	CUdeviceptr a_dev, b_dev, c_dev;
	unsigned int *a = (unsigned int *) malloc (n*n * sizeof(unsigned int));
	unsigned int *b = (unsigned int *) malloc (n*n * sizeof(unsigned int));
	unsigned int *c = (unsigned int *) malloc (n*n * sizeof(unsigned int));
	int block_x, block_y, grid_x, grid_y;
	char fname[256];
	struct timeval tv;
	struct timeval tv_total_start, tv_total_end;
	float total;
	struct timeval tv_h2d_start, tv_h2d_end;
	float h2d;
	struct timeval tv_d2h_start, tv_d2h_end;
	float d2h;
	struct timeval tv_exec_start, tv_exec_end;
	struct timeval tv_mem_alloc_start;
	struct timeval tv_data_init_start;
	float data_init;
	struct timeval tv_conf_kern_start;
	struct timeval tv_close_start;
	float mem_alloc;
	float exec;
	float init_gpu;
	float configure_kernel;
	float close_gpu;
	float data_read;

	unsigned int dummy_b, dummy_c;
	

	/* block_x * block_y should not exceed 512. */
	block_x = n < 16 ? n : 16;
	block_y = n < 16 ? n : 16;
	grid_x = n / block_x;
	if (n % block_x != 0)
		grid_x++;
	grid_y = n / block_y;
	if (n % block_y != 0)
		grid_y++;
	printf("block = (%d, %d)\n", block_x, block_y);
	printf("grid = (%d, %d)\n", grid_x, grid_y);

	gettimeofday(&tv_total_start, NULL);
	
	
	printf("Loading the module.\n");
	sprintf(fname, "%s/madd_gpu.cubin", path);
	cuModuleLoad(&module, fname);
	if (res != CUDA_SUCCESS) {
		printf("cuModuleLoad() failed\n");
		return -1;
	}
	printf("Loaded the module.\n");
	cuModuleGetFunction(&function, module, "_Z3addPjS_S_j");
	if (res != CUDA_SUCCESS) {
		printf("cuModuleGetFunction() failed\n");
		return -1;
	}
/*	cuFuncSetSharedSize(function, 0x40); /* just random 
	if (res != CUDA_SUCCESS) {
		printf("cuFuncSetSharedSize() failed\n");
		return -1;
	}
*/
	printf("Loaded the function.\n");
	cuFuncSetBlockShape(function, block_x, block_y, 1);
	if (res != CUDA_SUCCESS) {
		printf("cuFuncSetBlockShape() failed\n");
		return -1;
	}

	gettimeofday(&tv_mem_alloc_start, NULL);


	/* a[] */
	cuMemAlloc(&a_dev, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemAlloc (a) failed\n");
		return -1;
	}
	/* b[] */
	cuMemAlloc(&b_dev, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemAlloc (b) failed\n");
		return -1;
	}
	/* c[] */
	cuMemAlloc(&c_dev, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemAlloc (c) failed\n");
		return -1;
	}

	gettimeofday(&tv_data_init_start, NULL);

	/* initialize A[] & B[] */
	for (i = 0; i < n; i++) {
		idx = i*n;
		for(j = 0; j < n; j++) {			
			a[idx++] = i;
		}
	}
	for (i = 0; i < n; i++) {
		idx = i*n;
		for(j = 0; j < n; j++) {
			b[idx++] = i;
		}
	}


	gettimeofday(&tv_h2d_start, NULL);
	/* upload a[] and b[] */
	cuMemcpyHtoD(a_dev, a, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemcpyHtoD (a) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuMemcpyHtoD(b_dev, b, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemcpyHtoD (b) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	gettimeofday(&tv_h2d_end, NULL);

	gettimeofday(&tv_conf_kern_start, NULL);

	/* set kernel parameters */
	cuParamSeti(function, 0, a_dev);	
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (a) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 4, a_dev >> 32);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (a) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 8, b_dev);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (b) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 12, b_dev >> 32);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (b) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 16, c_dev);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (c) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 20, c_dev >> 32);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (c) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSeti(function, 24, n);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSeti (c) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuParamSetSize(function, 28);
	if (res != CUDA_SUCCESS) {
		printf("cuParamSetSize failed: %lu\n", (unsigned long)res);
		return -1;
	}

	gettimeofday(&tv_exec_start, NULL);
	/* launch the kernel */
	
	/*cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);*/
	//cuda_test_mmul(n,path);
	//cuda_test_mmul(n,path);
	//cuda_test_mmul(n,path);
//cuda_test_madd(n,path);
	cuLaunchGrid(function, grid_x, grid_y);
	if (res != CUDA_SUCCESS) {
		printf("cuLaunchGrid failed: %lu\n", (unsigned long)res);
		return -1;
	}
	/*cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);
	cuda_test_mmul(n,path);*/
	//cuda_test_mmul(n,path);
	//cuda_test_mmul(n,path);
	//cuCtxSynchronize();
	gettimeofday(&tv_exec_end, NULL);

	gettimeofday(&tv_d2h_start, NULL);
	/* download c[] */
	cuMemcpyDtoH(c, c_dev, n*n * sizeof(unsigned int));
	if (res != CUDA_SUCCESS) {
		printf("cuMemcpyDtoH (c) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	gettimeofday(&tv_d2h_end, NULL);

	/* Read back */
	for (i = 0; i < n; i++) {
		idx = i*n;
		for(j = 0; j < n; j++) {			
			dummy_c = c[idx++];
		}
	}

	gettimeofday(&tv_close_start, NULL);

	cuMemFree(a_dev);
	if (res != CUDA_SUCCESS) {
		printf("cuMemFree (a) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuMemFree(b_dev);
	if (res != CUDA_SUCCESS) {
		printf("cuMemFree (b) failed: %lu\n", (unsigned long)res);
		return -1;
	}
	cuMemFree(c_dev);
	if (res != CUDA_SUCCESS) {
		printf("cuMemFree (c) failed: %lu\n", (unsigned long)res);
		return -1;
	}

	cuModuleUnload(module);
	if (res != CUDA_SUCCESS) {
		printf("cuModuleUnload failed: %lu\n", (unsigned long)res);
		return -1;
	}

     /* cuCtxDestroy(ctx);
      if (res != CUDA_SUCCESS) {
              printf("cuCtxDestroy failed: %lu\n", (unsigned long)res);
              return -1;
      }*/

	free(a);
	free(b);
	free(c);

	gettimeofday(&tv_total_end, NULL);


	tvsub(&tv_mem_alloc_start, &tv_total_start, &tv);
	init_gpu = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_data_init_start, &tv_mem_alloc_start, &tv);
	mem_alloc = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_h2d_start, &tv_data_init_start, &tv);
	data_init = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_h2d_end, &tv_h2d_start, &tv);
	h2d = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_exec_start, &tv_conf_kern_start, &tv);
	configure_kernel = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_exec_end, &tv_exec_start, &tv);
	exec = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_d2h_end, &tv_d2h_start, &tv);
	d2h = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_close_start, &tv_d2h_end, &tv);
	data_read = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_total_end, &tv_close_start, &tv);
	close_gpu = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	tvsub(&tv_total_end, &tv_total_start, &tv);
	total = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

	/*printf("Init: %f\n", init_gpu);
	printf("MemAlloc: %f\n", mem_alloc);
	printf("DataInit: %f\n", data_init);
	printf("HtoD: %f\n", h2d);
	printf("KernConf: %f\n", configure_kernel);
	printf("Exec: %f\n", exec);
	printf("DtoH: %f\n", d2h);
	printf("DataRead: %f\n", data_read);
	printf("Close: %f\n", close_gpu);
	*/printf("Total: %f\n", total);

	return 0;
}


