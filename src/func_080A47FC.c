#include "types.h"

extern void func_080066B8(u16, u32);
extern void func_08005560(void);

void func_080A47FC(u16 *p) {
    if (*(u32 *)(p + 2) != 0) {
        func_080066B8(*p, 48);
        if (*(u32 *)(p + 2) != 0)
            func_08005560();
    }
}
