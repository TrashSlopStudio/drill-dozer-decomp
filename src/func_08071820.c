#include "types.h"

extern void func_08071610(u8 *);
extern void func_080715AC(u8 *);

u32 func_08071820(u8 *a) {
    *(u32 *)(a + 28) = 90;
    *(u32 *)(a + 32) = 60;
    *(u32 *)(a + 24) = 448;
    func_08071610(a);
    func_080715AC(a);
    return 1;
}
