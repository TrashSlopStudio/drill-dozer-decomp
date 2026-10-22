#include "types.h"
extern u8 *func_0807E43C(void);
u8 *func_0807E7BC(void) {
    s32 i = 0;
    u8 *p = func_0807E43C();
    do {
        if (!(*(u32 *)p & 0x80000000))
            return p;
        i++;
        p += 0xBC;
    } while (i <= 63);
    return 0;
}
