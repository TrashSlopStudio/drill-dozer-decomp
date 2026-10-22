#include "types.h"

extern u32 gUnk_082CAACC[];
extern u8 func_080118A8(void);

u32 func_080484B8(void) {
    u8 v = func_080118A8();
    u32 i;
    for (i = 0; i <= 4; i++) {
        if (gUnk_082CAACC[i] == v) {
            return 1;
        }
    }
    return 0;
}
