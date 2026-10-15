#include "types.h"

struct R {
    u32 a;
    u32 b;
    u32 pad[4];
};

extern struct R *func_08017890(u32);
extern u32 func_080177A0(u8 *);

u32 func_08017984(u8 *p) {
    struct R *t = func_08017890(*(u32 *)(p + 0x448));
    return t[func_080177A0(p)].b;
}
