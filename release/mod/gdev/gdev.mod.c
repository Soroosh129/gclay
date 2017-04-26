#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xee2e33c4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbbdd91b2, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc8a5e97d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa212dd1e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x883550be, __VMLINUX_SYMBOL_STR(gdev_drv_getdrm) },
	{ 0x44aca3f, __VMLINUX_SYMBOL_STR(gdev_drv_bo_unmap) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb10268a3, __VMLINUX_SYMBOL_STR(gdev_drv_chan_alloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x8d06cf68, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x899738f9, __VMLINUX_SYMBOL_STR(gdev_drv_write) },
	{ 0x224e47d3, __VMLINUX_SYMBOL_STR(gdev_drv_vspace_free) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x15ab698c, __VMLINUX_SYMBOL_STR(gdev_drv_bo_alloc) },
	{ 0x6a2584b1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x661684cc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x36c1872a, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9e601d98, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8282ec28, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x3be2650b, __VMLINUX_SYMBOL_STR(gdev_drv_getdevice) },
	{ 0xeb0d4d1b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x8fe42df, __VMLINUX_SYMBOL_STR(gdev_drv_vspace_alloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5f1e535a, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc9c69dc5, __VMLINUX_SYMBOL_STR(gdev_drv_getparam) },
	{ 0xcde9327a, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6430cf11, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xaf633356, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf490d1f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7dfaa980, __VMLINUX_SYMBOL_STR(gdev_drv_bo_map) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4e9cbbe0, __VMLINUX_SYMBOL_STR(gdev_drv_read) },
	{ 0x531b604e, __VMLINUX_SYMBOL_STR(__virt_addr_valid) },
	{ 0xdeb4750b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0x1c9912ad, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x97406116, __VMLINUX_SYMBOL_STR(gdev_drv_read32) },
	{ 0x4d0036d, __VMLINUX_SYMBOL_STR(gdev_drv_bo_bind) },
	{ 0x7f537fb4, __VMLINUX_SYMBOL_STR(gdev_drv_subch_alloc) },
	{ 0xab61e261, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc627a513, __VMLINUX_SYMBOL_STR(gdev_drv_getaddr) },
	{ 0xfa281870, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x78035b4b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9fe4132d, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x505b7a77, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3f5f4562, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xd677969a, __VMLINUX_SYMBOL_STR(gdev_drv_bo_unbind) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ad35912, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xac1c068e, __VMLINUX_SYMBOL_STR(gdev_drv_bo_free) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xfd1ccd8a, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4f87a2d8, __VMLINUX_SYMBOL_STR(gdev_drv_write32) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf2d0cb22, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc55115cf, __VMLINUX_SYMBOL_STR(gdev_drv_subch_free) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xa8b6fd2d, __VMLINUX_SYMBOL_STR(gdev_drv_chan_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nouveau";


MODULE_INFO(srcversion, "29332D36DC0A3E69951D5C1");
