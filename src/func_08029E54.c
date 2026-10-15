#include "types.h"

extern u32 func_080A2358(void);
extern void func_0800B3F4(void);
extern u32 func_0800B394(void);
extern void func_0802A210(u16 a);

void func_08029E54(u16 a) {
    if (func_080A2358() == 1) {
        func_0800B3F4();
        if (func_0800B394() == 1)
            return;
    }
    func_0802A210(a);
}
