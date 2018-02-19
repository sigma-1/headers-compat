/* Compatibility header for converting BSD/Linux macros to their Darwin equivalents. */

#ifndef _COMPAT_ATOMIC_H
#define _COMPAT_ATOMIC_H

#include <libkern/OSAtomic.h>

typedef struct {
	volatile uint32_t counter;
} atomic_t;

#define ATOMIC_INIT(i)				{ (i) }
#define atomic_read(a)				((a)->counter)
#define atomic_set(a, v)			(((a)->counter) = (v))
#define atomic_add(v, a)			OSAddAtomic(v, (SInt32 *)&((a)->counter))
#define atomic_sub(v, a)			OSAddAtomic(-(v), (SInt32 *)&((a)->counter))
#define atomic_inc(a)				OSIncrementAtomic((SInt32 *)&((a)->counter))
#define atomic_dec(a)				OSDecrementAtomic((SInt32 *)&((a)->counter))
#define atomic_sub_and_test(v, a)	(atomic_sub(v, a) == (v))
#define atomic_dec_and_test(a)		(atomic_dec(a) == 1)
#define atomic_inc_and_test(a)		(atomic_inc(a) == 1)
#define atomic_inc_return(a)		(atomic_inc(a) + 1)
#define atomic_dec_return(a)		(atomic_dec(a) - 1)

#endif /* _COMPAT_ATOMIC_H */
