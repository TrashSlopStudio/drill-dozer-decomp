#include "types.h"
struct Src {
    u8 pad[16];
    s16 x, y;
};
struct Obj {
    struct Src *src;
    u8 pad[20];
    s16 x, y;
};
extern void func_08007CB8(struct Obj *);
extern void func_08007CE0(struct Obj *);
void func_08007B6C(struct Obj *p, struct Src *s) {
    s32 t;
    p->src = s;
    t = s->x;
    p->x = t * 16;
    t = s->y;
    p->y = t * 16;
    func_08007CB8(p);
    func_08007CE0(p);
}
