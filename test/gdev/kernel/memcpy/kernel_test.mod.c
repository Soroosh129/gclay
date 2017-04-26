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
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xa2f67bca, __VMLINUX_SYMBOL_STR(gmemcpy_to_device) },
	{ 0xddbe6017, __VMLINUX_SYMBOL_STR(gtune) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xeb0d4d1b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf490d1f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xf66d3cab, __VMLINUX_SYMBOL_STR(gopen) },
	{ 0x33c2e0c4, __VMLINUX_SYMBOL_STR(gmemcpy_from_device) },
	{ 0xfa281870, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x25b540d3, __VMLINUX_SYMBOL_STR(gclose) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x4a2e5913, __VMLINUX_SYMBOL_STR(gmalloc) },
	{ 0xb186fbcd, __VMLINUX_SYMBOL_STR(gfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gdev";


MODULE_INFO(srcversion, "D0144806BA6F6B35EE44BD4");
