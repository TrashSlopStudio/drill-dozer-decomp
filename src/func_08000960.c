#include "types.h"

extern u32 *gUnk_02020D84;

u32 *func_08000960(u32 a) {
    u32 *p = gUnk_02020D84;
    while (p != 0) {
        if (p[4] == a)
            return p;
        p = (u32 *)p[1];
    }
    return 0;
}
