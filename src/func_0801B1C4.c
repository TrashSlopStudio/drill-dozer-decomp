#include "types.h"

extern void func_08012568(u32, s32);
extern void func_080F8FB8(u8 *, u32);
extern void func_0801AE70(u8 *);
extern void func_0800090C(u32);

void func_0801B1C4(u8 *p) {
    u32 a = *(u32 *)p;
    func_08012568(p[20], *(s16 *)(p + 0x56));
    func_080F8FB8(p, *(u32 *)(*(u32 *)(p + 4) + 8));
    func_0801AE70(p);
    func_0800090C(a);
}
