#include "types.h"

extern void func_08011720(void);
extern u32 func_080118A4(void);

u32 func_080305D0(void) {
    func_08011720();
    switch (func_080118A4()) {
    case 16:
        return 0;
    case 18:
        return 1;
    default:
        return 2;
    }
}
