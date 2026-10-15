#include "types.h"

extern u8 *func_08011720(void);
extern u32 func_080118A4(void);
extern u32 gUnk_082ADB64[];

u32 func_08036634(void) {
    u8 *p = func_08011720();
    if (func_080118A4() != 4)
        return 0;
    return gUnk_082ADB64[*(u32 *)(p + 0x48)];
}
