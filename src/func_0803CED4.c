#include "types.h"

extern void func_0803D7D8(u32 *p, u32 v);
extern void func_0803D61C(u32 *p);
extern void func_0803D674(u32 *p, u32 a, u32 b);

u32 func_0803CED4(u32 a, u32 *p) {
    func_0803D7D8(p, 0);
    func_0803D61C(p);
    func_0803D674(p, 2, 2);
    *p = 90;
    return 0;
}
