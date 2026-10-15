#include "types.h"

struct P {
    u16 x, y;
};

extern void func_080117BC(u32, struct P *);

void func_08044CE0(u32 a, u8 *out) {
    struct P s;
    func_080117BC(a, &s);
    *(u16 *)(out + 20) = s.x;
    *(u16 *)(out + 22) = s.y - 48;
}
