#include "types.h"

extern void func_08031C98(u8 *);
extern void func_08011B50(u8 *);
extern void func_0807F40C(u32, u32, u32);

u32 func_08031CE4(u8 *p) {
    func_08031C98(p);
    *(u32 *)(p + 0x48) = 3;
    func_08011B50(p);
    func_0807F40C(*(u32 *)(p + 0x30), 10, 16);
    return 1;
}
