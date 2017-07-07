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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xeb0d4d1b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xa81c613a, __VMLINUX_SYMBOL_STR(cuMemAlloc) },
	{ 0x3dfa3e6a, __VMLINUX_SYMBOL_STR(cuInit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4abe3290, __VMLINUX_SYMBOL_STR(cuMemcpyHtoD) },
	{ 0xf865ac38, __VMLINUX_SYMBOL_STR(cuMemcpyDtoH) },
	{ 0x246ccba8, __VMLINUX_SYMBOL_STR(cuCtxCreate) },
	{ 0xec6dafec, __VMLINUX_SYMBOL_STR(cuMemFree) },
	{ 0xd1638f02, __VMLINUX_SYMBOL_STR(cuCtxDestroy) },
	{ 0xfa281870, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x77531ce4, __VMLINUX_SYMBOL_STR(cuDeviceGet) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kcuda";


MODULE_INFO(srcversion, "3002FD5DA8B3BF7562D525E");
