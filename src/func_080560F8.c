#include "types.h"

u32 func_080560F8(u8 *a, u32 b) {
    u32 (*f)(u8 *, u32) = *(u32(**)(u8 *, u32))(a + 20);
    if (f == 0)
        return 2;
    return f(a, b);
}
