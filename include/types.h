/* Compatibility header for converting BSD/Linux macros to their Darwin equivalents. */

#ifndef _COMPAT_TYPES_H
#define _COMPAT_TYPES_H

#include <sys/types.h>
#include <MacTypes.h>

#ifndef _CADDR_T
#define _CADDR_T
typedef char *		__kernel_caddr_t;
typedef __kernel_caddr_t	caddr_t;
#endif

#define s8 SInt8
#define s16 SInt16
#define s32 SInt32
#define s64 SInt64

#define u8 UInt8
#define u16 UInt16
#define u32 UInt32
#define u64 UInt64

#define __s8 SInt8
#define __s16 SInt16
#define __s32 SInt32
#define __s64 SInt64

#define __u8 UInt8
#define __u16 UInt16
#define __u32 UInt32
#define __u64 UInt64

#define __aligned_u64 UInt64

#define __be16  SInt16
#define __be32  SInt32
#define __be64  SInt64

#define __le16  SInt16
#define __le32  SInt32
#define __le64  SInt64

#define __sum16 UInt16

#define dma_addr_t  IOPhysicalAddress64

#endif /* _COMPAT_TYPES_H */
