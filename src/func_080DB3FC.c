#include "types.h"

extern void func_0801BF90(u8 *);
extern void func_0802AF60(u32);
extern void func_080117FC(u32, u32);

u32 func_080DB3FC(u8 *p) {
    func_0801BF90(p);
    func_0802AF60(*(u32 *)(p + 12));
    func_080117FC(*(u32 *)(p + 12), 40);
    return 1;
}
