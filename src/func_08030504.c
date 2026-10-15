#include "types.h"

extern u16 func_08011A04(u32, u16);
extern u32 func_08030500(u32);

u32 func_08030504(u32 a) {
    if (func_08011A04(a, func_08030500(a)) != 0)
        return 1;
    return 0;
}
