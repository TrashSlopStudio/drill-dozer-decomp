#include "types.h"
u32 func_080118FC(u32);
void func_08011834(u32, u32 *);
void func_0802E6A4(u32, u32 *, u32);
void func_0802E754(u32 a, u32 b) {
    u32 buf;
    u32 r = func_080118FC(a);
    func_08011834(a, &buf);
    func_0802E6A4(r, &buf, b);
}
