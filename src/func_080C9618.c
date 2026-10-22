#include "types.h"

extern void func_0802FAB4(s32 *p);
extern void func_080213F4(s32 *p, s32 n);

s32 func_080C9618(s32 *p) {
    p[89] = 0;
    func_0802FAB4(p);
    func_080213F4(p, 152);
    p[18] = 1;
    return 0;
}
