#include "types.h"

extern void func_08011834(u8 *p, u32 *out);
extern void func_0802E5F4(s32 a, u32 *b, s32 c);

void func_0802E610(u8 *p, s32 a, s32 c) {
    u32 v;
    func_08011834(p, &v);
    func_0802E5F4(a, &v, c);
}
