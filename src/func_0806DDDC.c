#include "types.h"

extern void func_08020E54(void);
extern void func_0806D608(u8 *);

void func_0806DDDC(u8 *p, u32 *b) {
    *(u32 *)(p + 0x38C) = *b;
    func_08020E54();
    func_0806D608(p);
}
