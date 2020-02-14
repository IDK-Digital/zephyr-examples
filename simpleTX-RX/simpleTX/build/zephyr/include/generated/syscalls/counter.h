
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_START, counter_start, int, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_STOP, counter_stop, int, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_READ, counter_read, u32_t, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_GET_PENDING_INT, counter_get_pending_int, int, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_GET_TOP_VALUE, counter_get_top_value, u32_t, struct device *, dev)

K_SYSCALL_DECLARE1(K_SYSCALL_COUNTER_GET_MAX_RELATIVE_ALARM, counter_get_max_relative_alarm, u32_t, struct device *, dev)

#ifdef __cplusplus
}
#endif

#endif
