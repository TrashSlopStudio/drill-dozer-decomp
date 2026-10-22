#include "types.h"

struct S {
    u32 a;
    u32 b;
};

extern struct S *gUnk_0203605C;
extern void func_08005350(void);
extern void func_08001768(struct S *p);
extern void func_0800090C(u32 a);

void func_08068350(void) {
    u32 t = gUnk_0203605C->b;
    func_08005350();
    func_08001768(gUnk_0203605C);
    gUnk_0203605C = 0;
    func_0800090C(t);
}
