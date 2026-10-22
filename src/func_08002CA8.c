#include "types.h"

extern u8 gUnk_03000960[];
extern u32 func_080C1FC8(u32, u32);

u32 func_08002CA8(u16 a) {
    if (gUnk_03000960[0] == 1) {
        return (u16)func_080C1FC8(*(u32 *)(gUnk_03000960 + 4), a);
    }
    return a;
}
