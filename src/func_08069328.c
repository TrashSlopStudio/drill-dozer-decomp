#include "types.h"
extern u32 gUnk_083395D4[];
extern u32 func_080F8FB8(u32 *, u32);
extern void func_08009C44(u32);
extern void func_080097A0(u32);
void func_08069328(u32 a, u32 *b) {
    if (func_080F8FB8(b, gUnk_083395D4[b[1]])) {
        func_08009C44(b[0]);
        func_080097A0(a);
    }
}
