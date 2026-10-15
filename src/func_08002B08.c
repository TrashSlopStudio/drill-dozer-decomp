#include "types.h"

extern void func_08002AB8(void);
extern void func_08001370(u32, u32, u16, u32);
extern u8 gUnk_02020DA4[];

void func_08002B08(void) {
    func_08002AB8();
    func_08001370((u32)gUnk_02020DA4, 0x07000000, 0x400, 1);
}
