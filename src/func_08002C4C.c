#include "types.h"

struct R {
    u32 a, b;
};
extern struct R gUnk_020211A4[];
extern void func_080F8714(u32, struct R *);

u32 func_08002C4C(u32 a, u8 b) {
    if (b < 32) {
        func_080F8714(a, &gUnk_020211A4[b]);
        if (a)
            return 1;
        return 1;
    }
    return 0;
}
