#include "types.h"
extern u8 *func_0801AF9C(int, int);
void func_080D70E4(int a, u32 *b) {
    u8 *p;
    *b = (u32)(p = func_0801AF9C(a, 11));
    p += 0x25;
    *(s8 *)p = (*(s8 *)p & ~12) | 8;
}
