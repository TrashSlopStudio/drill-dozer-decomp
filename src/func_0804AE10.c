#include "types.h"

typedef u32 (*Fn)(void);
extern Fn gUnk_082EBD90[];
extern u8 gUnk_082EBD8C[];

u32 func_0804AE10(u32 a) {
    if (a > 3)
        return (u32)gUnk_082EBD8C;
    return gUnk_082EBD90[a]();
}
