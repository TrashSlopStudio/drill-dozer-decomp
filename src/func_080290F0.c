#include "types.h"

struct T {
    u8 pad[0x25];
    u8 a : 2;
    u8 b : 2;
};

void func_080290F0(u8 *p, u32 v) {
    p += 0x7C;
    (*(struct T **)(p + 4))->b = v;
}
