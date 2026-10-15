#include "types.h"
struct S {
    u32 a, b;
};
extern struct S *gUnk_083925EC[];
void func_08083648(u8 *p, int i, int j) {
    struct S *t = gUnk_083925EC[i];
    *(struct S *)(p + 0x160) = t[j];
}
