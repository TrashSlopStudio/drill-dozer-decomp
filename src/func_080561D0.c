#include "types.h"

extern u32 func_080305C0(void);
extern u32 func_080560D8(void);
extern void func_08056150(u32, u32, u32, u32);

u32 func_080561D0(void) {
    u32 r = func_080305C0();
    if (r != 0 && func_080560D8() != 0) {
        func_08056150(r, 0, 0, 0);
        return 1;
    }
    return 0;
}
