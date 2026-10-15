#include "types.h"

struct P {
    u32 a, b;
};

void func_0807FE50(u32 a, u8 *d, u32 *s) {
    *(u32 *)(d + 4) = s[0];
    *(u32 *)(d + 8) = s[1];
    *(u32 *)(d + 12) = s[2];
    *(u32 *)(d + 16) = s[3];
    *(struct P *)(d + 36) = *(struct P *)(s + 4);
}
