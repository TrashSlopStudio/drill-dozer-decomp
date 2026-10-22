#include "types.h"

extern void func_080021CC(u8, u32, u32, u32);
extern void func_08002248(u8);
extern void func_08001B34(u8);

void func_0805D130(u8 a) {
    func_080021CC(a, 0x083193D0, 0, 0);
    func_08002248(a);
    func_08001B34(a);
}
