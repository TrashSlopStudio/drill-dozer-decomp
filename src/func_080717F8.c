#include "types.h"

extern void func_08071610(u8 *);
extern void func_080715AC(u8 *);

u32 func_080717F8(u8 *p) {
    *(u32 *)(p + 28) = 155;
    *(u32 *)(p + 32) = 60;
    *(u32 *)(p + 24) = 448;
    func_08071610(p);
    func_080715AC(p);
    return 1;
}
