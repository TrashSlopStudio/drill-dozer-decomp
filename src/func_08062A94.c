#include "types.h"

extern void func_080043D8(void);
extern u16 func_08004444(u8);

u32 func_08062A94(u8 a) {
    func_080043D8();
    if (func_08004444(a) == 0)
        return 1;
    return 0;
}
