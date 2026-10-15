#include "types.h"

extern u32 func_080BF4A0(u8 *);
extern void func_080C0694(u32, u32);

u32 func_080BFB08(u8 *p) {
    if (func_080BF4A0(p) != 1) {
        func_080C0694(*(u32 *)(p + 0x74), 3);
        *(u32 *)p = 24;
    }
    return 0;
}
