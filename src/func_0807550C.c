#include "types.h"

extern u32 gUnk_08363340[][2];
extern u32 gUnk_08363380[][2];
void func_080754C0(u32, u32, u32);

void func_0807550C(u32 i, u32 a) {
    u32 *p = gUnk_08363380[i];
    u32 *q = gUnk_08363340[i];
    func_080754C0(a, *q, *p);
}
