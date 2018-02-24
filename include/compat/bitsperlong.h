/* Compatibility header for converting BSD/Linux macros to their Darwin equivalents. */

#ifndef _COMPAT_BITSPERLONG_H
#define _COMPAT_BITSPERLONG_H

#ifndef __WORDSIZE
#define __WORDSIZE (__SIZEOF_LONG__ * 8)
#endif

#ifndef BITS_PER_LONG
#define BITS_PER_LONG __WORDSIZE
#endif

#ifndef BITS_PER_LONG_LONG
#define BITS_PER_LONG_LONG __WORDSIZE
#endif

#endif /* _COMPAT_BITSPERLONG_H */
