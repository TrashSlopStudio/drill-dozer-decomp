#include "types.h"

extern s32 func_0803D7E4(s32);
extern s32 func_0803D7FC(s32);
extern void func_0803D674(u8 *, s32, s32);

void func_0803D770(u8 *p) {
    s16 *q = (s16 *)(p + 0x152);
    s32 a = func_0803D7E4(*q);
    func_0803D674(p, a, func_0803D7FC(*q));
}
