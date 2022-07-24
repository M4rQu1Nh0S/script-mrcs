#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
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
	{ 0xcb440b5e, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d85988f, "netdev_info" },
	{ 0x30e531f6, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa9b316f, "ethtool_op_get_ts_info" },
	{ 0xad5b371a, "skb_clone_tx_timestamp" },
	{ 0xffb17667, "__skb_gso_segment" },
	{ 0xb946acff, "pci_write_config_word" },
	{ 0xc1025998, "single_open" },
	{ 0xe68ac1d6, "_dev_printk" },
	{ 0x55dc419c, "param_ops_int" },
	{ 0x7c3ccfcc, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x856ceb9a, "pci_read_config_byte" },
	{ 0x4dfb0626, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd898d1c0, "dma_set_mask" },
	{ 0x964b176c, "single_release" },
	{ 0xfd277e3e, "pci_get_slot" },
	{ 0xf8bfc3c1, "seq_puts" },
	{ 0xdd1d3f70, "pci_disable_device" },
	{ 0x2acda660, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe7a4bdfe, "seq_printf" },
	{ 0xa2c160fd, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x74e4343e, "pci_write_config_byte" },
	{ 0x7bd0a6d1, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3cfe778, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x581e0fb8, "pci_enable_wake" },
	{ 0x1c73218e, "dma_free_attrs" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6b6889b6, "seq_read" },
	{ 0xd437cde9, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x727db97, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9928309e, "PDE_DATA" },
	{ 0x26556bab, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xcf237c93, "dma_sync_single_for_cpu" },
	{ 0xf5354c67, "proc_mkdir" },
	{ 0x5591a871, "netif_tx_wake_queue" },
	{ 0xa952927e, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6c0888f4, "register_netdev" },
	{ 0xf13f94f1, "seq_putc" },
	{ 0xd1c63e32, "napi_enable" },
	{ 0x8a1cb78e, "pci_read_config_word" },
	{ 0x8a7be95d, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5b1ddb15, "proc_mkdir_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd49b403a, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6e06a909, "init_net" },
	{ 0x72839fb4, "_dev_err" },
	{ 0xbaaef323, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2e95ef68, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdb830de9, "pci_find_capability" },
	{ 0x3dd2e7ea, "pci_set_mwi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xafcac0fb, "netif_device_attach" },
	{ 0xea59368d, "napi_gro_receive" },
	{ 0xe2cf86c7, "_dev_info" },
	{ 0x9a0fb64c, "pci_disable_link_state" },
	{ 0x84b9ae8b, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x50acaeb4, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x692abf19, "skb_checksum_help" },
	{ 0x92997ed8, "_printk" },
	{ 0x8a6b53de, "napi_complete_done" },
	{ 0xb83d7b55, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xde98f0d0, "pci_read_config_dword" },
	{ 0xf0f074b8, "eth_type_trans" },
	{ 0x1c4b5987, "proc_get_parent_data" },
	{ 0x689681a7, "dev_driver_string" },
	{ 0xf2dba74f, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c88a58b, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x38456707, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x642f6ab6, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x306cb10b, "pci_set_power_state" },
	{ 0x6f4220c3, "remove_proc_subtree" },
	{ 0x508f4fd7, "proc_create_data" },
	{ 0x3d7e2f4a, "pci_clear_mwi" },
	{ 0xb79032b, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf03a22e2, "pci_request_regions" },
	{ 0x40f36d84, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x3bc28c74, "dma_sync_single_for_device" },
	{ 0xdb4961ce, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xb2781d12, "dma_unmap_page_attrs" },
	{ 0x9a1f7f85, "unregister_netdev" },
	{ 0xe8706c10, "pci_choose_state" },
	{ 0xbf5edb26, "consume_skb" },
	{ 0x56d20853, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x58e56371, "__napi_alloc_skb" },
	{ 0x9b5cc715, "skb_tstamp_tx" },
	{ 0x4a468d36, "skb_put" },
	{ 0x203c1bcf, "pci_enable_device" },
	{ 0xa5953d74, "pci_wake_from_d3" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7feccf4f, "param_ops_ulong" },
	{ 0xe72130a7, "param_ops_uint" },
	{ 0x3f29ca7e, "skb_copy_bits" },
	{ 0xed8140d2, "__skb_pad" },
	{ 0xb8f9ea36, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa30c642e, "pci_save_state" },
	{ 0x9ca14e85, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "A9333C60271C1AA7CCCDBA0");
