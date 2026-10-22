#include "types.h"

extern u32 func_080305B8(u32);
extern u32 func_080560D4(void);
extern void func_08056150(u32, u32, u32, u32);
extern void func_08011A6C(u32, u32);

void func_08057810(u32 a) {
    u32 r = func_080305B8(a);
    if (func_080560D4() == 4) {
        func_08056150(r, 0, 5, 0);
    }
    func_08011A6C(a, 9);
}
