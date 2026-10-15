#include "types.h"

extern void func_08011A40(u32, u32);
extern void func_080B34A0(u32, u32);

void func_080836C0(u32 a, u32 *b) {
    if (*b != 32) {
        func_08011A40(a, 2);
        func_080B34A0(a, 0);
    }
}
