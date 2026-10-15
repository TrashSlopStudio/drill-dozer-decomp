#include "types.h"

extern void func_080715AC(u8 *p);
extern void func_080715B8(u8 *p);

u32 func_08071898(u8 *p) {
    *(s32 *)(p + 24) += 8;
    if (*(s32 *)(p + 24) > 1024)
        func_080715AC(p);
    func_080715B8(p);
    return 0;
}
