#include "types.h"
extern u8 *gUnk_02036118;
extern u32 gUnk_0838290C;
extern void func_08005BBC(u32, u32, u32);
u32 func_0807C3DC(void) {
    u8 *p = gUnk_02036118;
    if (*(u32 *)(p + 0x20) == 0) {
        func_08005BBC(*(u32 *)(p + 0x24), gUnk_0838290C, 0);
    }
    return *(u32 *)(gUnk_02036118 + 0x20);
}
