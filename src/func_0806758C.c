#include "types.h"

extern u32 func_08067500(u32, u32 *, u32 *, u32 *);
extern void func_08001768(void *);
extern void func_0800090C(void *);

void func_0806758C(void *a, u32 *p) {
    if (func_08067500(p[0], &p[1], &p[2], &p[4]) != 0) {
        func_08001768(p);
        func_0800090C(a);
    }
}
