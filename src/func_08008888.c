#include "types.h"

extern void func_08007F74(u8 *p, u8 i);

void func_08008888(u8 *p) {
    func_08007F74(p, 0);
    if (*(u8 **)(p + 64))
        func_08007F74(*(u8 **)(p + 64), 1);
}
