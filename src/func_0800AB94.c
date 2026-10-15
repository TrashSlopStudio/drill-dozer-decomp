#include "types.h"
extern u32 func_0800B220(u8 *);
extern void func_0800090C(u32);
void func_0800AB94(u32 a, u8 *b) {
    if (func_0800B220(b) == 1) {
        *(u32 *)(b + 0x38) = 0;
        func_0800090C(a);
    }
}
