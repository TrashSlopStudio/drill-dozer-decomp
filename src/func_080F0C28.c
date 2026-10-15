#include "types.h"

extern void func_08000F28(u32, u32);
extern void func_08000FD8(u32, u32);

void func_080F0C28(void) {
    func_08000F28(82, 16);
    func_08000FD8(0, 0x6000);
}
