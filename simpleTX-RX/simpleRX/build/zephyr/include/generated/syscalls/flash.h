
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE4(K_SYSCALL_FLASH_READ, flash_read, int, struct device *, dev, off_t, offset, void *, data, size_t, len)

K_SYSCALL_DECLARE4(K_SYSCALL_FLASH_WRITE, flash_write, int, struct device *, dev, off_t, offset, const void *, data, size_t, len)

K_SYSCALL_DECLARE3(K_SYSCALL_FLASH_ERASE, flash_erase, int, struct device *, dev, off_t, offset, size_t, size)

K_SYSCALL_DECLARE2(K_SYSCALL_FLASH_WRITE_PROTECTION_SET, flash_write_protection_set, int, struct device *, dev, bool, enable)

K_SYSCALL_DECLARE3(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS, flash_get_page_info_by_offs, int, struct device *, dev, off_t, offset, struct flash_pages_info *, info)

K_SYSCALL_DECLARE3(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX, flash_get_page_info_by_idx, int, struct device *, dev, u32_t, page_index, struct flash_pages_info *, info)

K_SYSCALL_DECLARE1(K_SYSCALL_FLASH_GET_PAGE_COUNT, flash_get_page_count, size_t, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE, flash_get_write_block_size, size_t, struct device *, dev)

#ifdef __cplusplus
}
#endif

#endif
