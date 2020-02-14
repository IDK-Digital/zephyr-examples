
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE4(K_SYSCALL_CAN_SEND, can_send, int, struct device *, dev, const struct zcan_frame *, msg, s32_t, timeout, can_tx_callback_t, callback_isr)

K_SYSCALL_DECLARE3(K_SYSCALL_CAN_ATTACH_MSGQ, can_attach_msgq, int, struct device *, dev, struct k_msgq *, msg_q, const struct zcan_filter *, filter)

K_SYSCALL_DECLARE2_VOID(K_SYSCALL_CAN_DETACH, can_detach, struct device *, dev, int, filter_id)

K_SYSCALL_DECLARE3(K_SYSCALL_CAN_CONFIGURE, can_configure, int, struct device *, dev, enum can_mode, mode, u32_t, bitrate)

#ifdef __cplusplus
}
#endif

#endif
