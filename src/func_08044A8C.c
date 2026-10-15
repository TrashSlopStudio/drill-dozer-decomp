#include "types.h"

struct S {
    u8 *p;
    u8 pad[12];
    u8 f;
};

extern struct S *gUnk_02035A70;
extern void func_08005560(u8 *);
extern void func_080066B8(u32, u32);

void func_08044A8C(void) {
    gUnk_02035A70->f = gUnk_02035A70->p[1];
    func_08005560(gUnk_02035A70->p);
    func_080066B8(200, 4);
}
