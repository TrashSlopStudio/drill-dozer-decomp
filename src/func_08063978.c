#include "types.h"

struct S14 {
    u8 a;
    u8 b;
    u16 pad;
    u32 c;
};

struct S {
    u8 pad[20];
    struct S14 *p;
};

extern struct S *gUnk_0203603C;
extern void func_08063908(void);

u32 func_08063978(void) {
    gUnk_0203603C->p->a = 0;
    gUnk_0203603C->p->b = 0;
    gUnk_0203603C->p->c = 0;
    func_08063908();
    return 1;
}
