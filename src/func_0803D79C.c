#include "types.h"

extern void func_0803E044(u8 *p);
extern void func_0803E388(u8 *p);

void func_0803D79C(u8 *p) {
    func_0803E044(p);
    if (*(u32 *)(p + 0x64) == 1)
        func_0803E388(p);
}
