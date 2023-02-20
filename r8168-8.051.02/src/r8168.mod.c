#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaa297e8d, "alloc_etherdev_mqs" },
	{ 0x7a5fdc1b, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x69d7b3d0, "device_set_wakeup_enable" },
	{ 0xa4c4439e, "__skb_pad" },
	{ 0xed7d3b81, "skb_copy_bits" },
	{ 0xd43859f2, "param_ops_uint" },
	{ 0x64de735d, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb53bd6a4, "pci_wake_from_d3" },
	{ 0xd494bc92, "pci_enable_device" },
	{ 0x1ba244c1, "skb_put" },
	{ 0xb0c0ffcb, "skb_tstamp_tx" },
	{ 0x1eba6d26, "__napi_alloc_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6380e348, "netdev_update_features" },
	{ 0x9a49eae3, "consume_skb" },
	{ 0xadee10f9, "netif_napi_add_weight" },
	{ 0xf7f81ed, "pci_choose_state" },
	{ 0xd6e69bd7, "unregister_netdev" },
	{ 0x5eaca692, "dma_unmap_page_attrs" },
	{ 0xf7370f56, "system_state" },
	{ 0x7e2d339e, "__pci_register_driver" },
	{ 0xf42d7be9, "dma_sync_single_for_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x30c63bc6, "pci_disable_msi" },
	{ 0x308dbbb7, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2531a760, "seq_lseek" },
	{ 0xa49814f8, "pci_clear_mwi" },
	{ 0x771e3640, "proc_create_data" },
	{ 0x53a28702, "remove_proc_subtree" },
	{ 0x368c2f95, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xda6d9dea, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86bb6b5a, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x273033fa, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc945a14c, "pskb_expand_head" },
	{ 0x89b3e66d, "dev_driver_string" },
	{ 0x606a6519, "dev_addr_mod" },
	{ 0xee5f12bc, "proc_get_parent_data" },
	{ 0xd6934308, "eth_type_trans" },
	{ 0xdc51bdab, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf25f9dcc, "dma_map_page_attrs" },
	{ 0xa447f881, "napi_complete_done" },
	{ 0x92997ed8, "_printk" },
	{ 0x1ed3140c, "skb_checksum_help" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x97826671, "__napi_schedule" },
	{ 0x65bc783d, "pci_enable_msix_range" },
	{ 0xa916b694, "strnlen" },
	{ 0x76053ff5, "netif_device_detach" },
	{ 0x93acf0f, "pci_disable_link_state" },
	{ 0xd6263894, "_dev_info" },
	{ 0xc02d2745, "napi_gro_receive" },
	{ 0xeecac261, "netif_device_attach" },
	{ 0xc6cbbc89, "capable" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x28ad8f3b, "pci_set_mwi" },
	{ 0xfd286792, "pci_find_capability" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x936fc7f5, "pci_clear_master" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe9a7cb34, "pci_enable_msi" },
	{ 0xe4e71ba2, "_dev_err" },
	{ 0xbc359417, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcb9e08b1, "proc_mkdir_data" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdc6a670b, "dma_alloc_attrs" },
	{ 0xa01f2664, "pci_read_config_word" },
	{ 0xdef20ac1, "napi_enable" },
	{ 0x2b3fdd8f, "seq_putc" },
	{ 0xe590d026, "register_netdev" },
	{ 0xe8386f75, "free_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xde80cd09, "ioremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x96019b4f, "pci_restore_state" },
	{ 0x83a2c20d, "netif_tx_wake_queue" },
	{ 0x91e77b10, "proc_mkdir" },
	{ 0x72f99096, "dma_sync_single_for_cpu" },
	{ 0xfb578fc5, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7674696d, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x9d10a493, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb093ae0b, "dma_set_coherent_mask" },
	{ 0xd51950b1, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3ab8a07e, "dma_free_attrs" },
	{ 0xd8573a48, "pci_enable_wake" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x36ca193e, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x21145e74, "__dev_kfree_skb_any" },
	{ 0x33b997c1, "pci_write_config_byte" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6d459e1c, "netif_carrier_off" },
	{ 0xe6c49e03, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74e717f0, "netif_carrier_on" },
	{ 0xda9e0bb7, "pci_disable_msix" },
	{ 0x350790, "pci_disable_device" },
	{ 0x5abb6ed9, "seq_puts" },
	{ 0x530ba382, "pci_get_slot" },
	{ 0x1d509809, "single_release" },
	{ 0x9f14b916, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa730f817, "netif_set_tso_max_size" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x87105a31, "napi_schedule_prep" },
	{ 0xe4386fec, "pci_read_config_byte" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x363f2fee, "napi_disable" },
	{ 0x4fa8f1f1, "param_ops_int" },
	{ 0x5beb1694, "_dev_printk" },
	{ 0x188bec0b, "netif_set_tso_max_segs" },
	{ 0xa6893d39, "single_open" },
	{ 0x1793ad5b, "pci_write_config_word" },
	{ 0xf9894c, "__skb_gso_segment" },
	{ 0xfa483fad, "skb_clone_tx_timestamp" },
	{ 0x9580c890, "ethtool_op_get_ts_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82ff539b, "pci_write_config_dword" },
	{ 0x8ca1533a, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "4E7AF7E69DE726CC1457B44");
