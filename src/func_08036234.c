#include "types.h"

struct P {
    u16 x, y;
};

extern void func_08011834(u32, struct P *);

void func_08036234(u32 a, u16 *out) {
    struct P s;
    func_08011834(a, &s);
    out[0] = s.x;
    out[1] = s.y - 15;
}
