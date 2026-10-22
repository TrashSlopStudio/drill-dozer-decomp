#include "types.h"
extern void func_080066B8(u32, u32);
extern void func_08001768(u8 *);
extern void func_0800090C(u32);
void func_08022284(u32 a, u8 *p) {
    if (p[6] == p[7]) {
        *(u8 *)(*(u32 *)p + 72) = 1;
        func_080066B8(*(u16 *)(p + 4), 112);
        func_08001768(p);
        func_0800090C(a);
    }
}
