#include "types.h"
struct P {
    u32 a;
    u16 b;
    u16 c;
};
extern void func_080062F4(u8 i, struct P *out);

u16 func_080D8308(void) {
    struct P t;
    func_080062F4(2, &t);
    t.b >>= 11;
    return t.b;
}
