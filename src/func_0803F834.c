#include "types.h"

extern void func_080066B8(u16 a, u16 b);
extern void func_08005560(u8 *p);

void func_0803F834(u8 *a) {
    u8 *p = *(u8 **)(a + 0x5c);
    switch (*(s32 *)(a + 4)) {
    case 0:
    case 8:
    case 9:
        func_080066B8(*(u16 *)(p + 0x10), *(u16 *)(p + 0x12));
        break;
    }
    func_08005560(p);
}
