#include "types.h"

struct B {
    u8 pad[0x25];
    u8 lo : 2;
    u8 f : 2;
};

extern void func_0809D43C(u8 *);

void func_0809CCC8(u8 *p) {
    u8 *q = p + 0x7C;
    u8 v = (*(struct B **)(q + 4))->f;
    p[0xD2] = v;
    func_0809D43C(p + 0x80);
}
