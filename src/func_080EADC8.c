#include "types.h"

struct B {
    u8 pad[37];
    u8 a : 2;
    u8 b : 2;
};

extern void func_08044E64(u8 *);

void func_080EADC8(u8 *p) {
    u8 *q = p + 124;
    q[27] = (*(struct B **)(q + 4))->b;
    func_08044E64(p + 128);
}
