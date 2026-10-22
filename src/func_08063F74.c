#include "types.h"

extern u16 **gUnk_02036048;
extern void func_08005560(void);
extern void func_080066B8(u16, u32);

void func_08063F74(void) {
    if (((u32 *)gUnk_02036048)[1] != 0) {
        func_08005560();
        ((u32 *)gUnk_02036048)[1] = 0;
    }
    func_080066B8(*(u16 *)gUnk_02036048, 0x30);
}
