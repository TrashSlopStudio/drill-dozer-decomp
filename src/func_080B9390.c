#include "types.h"
extern s32 func_080F8700(s32, s32);
void func_080B9390(s32 *p, s32 a, s32 b) {
    p[20] = func_080F8700(p[16] * a, 100);
    p[21] = func_080F8700(p[17] * b, 100);
}
