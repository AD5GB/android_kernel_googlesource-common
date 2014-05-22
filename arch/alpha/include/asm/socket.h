#ifndef _ASM_SOCKET_H
#define _ASM_SOCKET_H

#include <uapi/asm/socket.h>

#ifdef __KERNEL__
/* O_NONBLOCK clashes with the bits used for socket types.  Therefore we
 * have to define SOCK_NONBLOCK to a different value here.
 */
#define SOCK_NONBLOCK	0x40000000
#endif /* __KERNEL__ */

#endif /* _ASM_SOCKET_H */
