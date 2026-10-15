#include "types.h"
extern u16 func_08048684(void);
extern void func_08001370(u32, u32, u32, u32);
void func_08085064(u32 a, u8 *b) {
    *(u16 *)(b + 22) = func_08048684();
    func_08001370(0x839DD68, 0x6010000 + (*(u16 *)(b + 22) << 5), 0x80, 1);
}
