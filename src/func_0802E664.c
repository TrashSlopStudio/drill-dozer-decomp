#include "types.h"
u32 func_080119D4(u32);
void func_08011834(u32, u32 *);
void func_0802E630(u32, u32 *, u32);
void func_0802E664(u32 a, u32 b) {
    u32 buf;
    func_08011834(a, &buf);
    func_0802E630(func_080119D4(a), &buf, b);
}
