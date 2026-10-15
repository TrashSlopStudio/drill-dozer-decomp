#include "types.h"
extern void func_0803D7D8(u32 *, u32);
extern void func_0803D61C(u32 *);
extern void func_0803D674(u32 *, u32, u32);
u32 func_0803CE78(u32 a, u32 *b) {
    func_0803D7D8(b, 1);
    func_0803D61C(b);
    func_0803D674(b, 2, 2);
    *b = 88;
    return 0;
}
