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
	{ 0xf704969, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x407db6b5, "netdev_info" },
	{ 0x71dc9728, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd11664d, "ethtool_op_get_ts_info" },
	{ 0x2f26833c, "skb_clone_tx_timestamp" },
	{ 0xcf466af6, "__skb_gso_segment" },
	{ 0x95d9e1d1, "pci_write_config_word" },
	{ 0x5d053422, "single_open" },
	{ 0xceb6d0fb, "_dev_printk" },
	{ 0xf247fba3, "param_ops_int" },
	{ 0x4dc25fe9, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x45f8ff37, "pci_read_config_byte" },
	{ 0x3273d6b6, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe9c2ad91, "dma_set_mask" },
	{ 0x359f0950, "single_release" },
	{ 0x7bc2c292, "pci_get_slot" },
	{ 0x826708e4, "seq_puts" },
	{ 0x8de7b894, "pci_disable_device" },
	{ 0x40a1aaac, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd78b86c9, "seq_printf" },
	{ 0xd96b58e2, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x907b0366, "pci_write_config_byte" },
	{ 0x4417a589, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfbc3773, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd74fc6b2, "pci_enable_wake" },
	{ 0x659ccd2f, "dma_free_attrs" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbe503d2d, "seq_read" },
	{ 0x1f87d038, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x408bdc34, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17341d99, "PDE_DATA" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x303004cd, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xfe0f9777, "dma_sync_single_for_cpu" },
	{ 0xef88c3ee, "proc_mkdir" },
	{ 0x9898d6aa, "netif_tx_wake_queue" },
	{ 0xdf2a2797, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56860d2, "register_netdev" },
	{ 0x53806aa6, "seq_putc" },
	{ 0x533a83c6, "napi_enable" },
	{ 0xb3c9b55c, "pci_read_config_word" },
	{ 0x78048de3, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x2e85cc64, "proc_mkdir_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf7dddfea, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa21071e2, "init_net" },
	{ 0x461dee21, "_dev_err" },
	{ 0xb7a8a9e6, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe5859e0, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7eb2bdfa, "pci_find_capability" },
	{ 0x8c24f33, "pci_set_mwi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x282c7636, "netif_device_attach" },
	{ 0xbe282964, "napi_gro_receive" },
	{ 0x55dde90f, "_dev_info" },
	{ 0xc53dc97b, "pci_disable_link_state" },
	{ 0x1291fbe, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xf09937a3, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf999558f, "skb_checksum_help" },
	{ 0x92997ed8, "_printk" },
	{ 0xb946c955, "napi_complete_done" },
	{ 0x76310d8d, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x81c6ed04, "pci_read_config_dword" },
	{ 0xb08275c2, "eth_type_trans" },
	{ 0x3978d7a7, "proc_get_parent_data" },
	{ 0x4e9bc31b, "dev_driver_string" },
	{ 0x37d7bccb, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9b005891, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8754a2ac, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8765dc84, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeafabcf3, "pci_set_power_state" },
	{ 0x1899e0ef, "remove_proc_subtree" },
	{ 0x9ad827c2, "proc_create_data" },
	{ 0x57fae4d7, "pci_clear_mwi" },
	{ 0x3d9d351b, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe3623b5c, "pci_request_regions" },
	{ 0xcd2f8f17, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x1d9a7010, "dma_sync_single_for_device" },
	{ 0x76c2092d, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xd1028c31, "dma_unmap_page_attrs" },
	{ 0x45f788d2, "unregister_netdev" },
	{ 0xe39ed497, "pci_choose_state" },
	{ 0x3614eaf0, "consume_skb" },
	{ 0x7017650c, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdb42f1dd, "__napi_alloc_skb" },
	{ 0x70efbc60, "skb_tstamp_tx" },
	{ 0x5a1f8d90, "skb_put" },
	{ 0xe9b2e30d, "pci_enable_device" },
	{ 0x566c1c99, "pci_wake_from_d3" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc86187a, "param_ops_ulong" },
	{ 0x51e08620, "param_ops_uint" },
	{ 0x65e5ba3d, "skb_copy_bits" },
	{ 0x6a6aa5de, "__skb_pad" },
	{ 0x305c7c36, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa3171885, "pci_save_state" },
	{ 0x66a9afcc, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "0B8582C6A11E9124DA40678");
