#include "types.h"

extern u32 func_0800B3FC(u32);
extern u32 gUnk_0203602C;
extern u32 gUnk_08327A88[];

void func_08062284(u32 a, u16 b) {
    u32 i = func_0800B3FC(a);
    gUnk_0203602C = gUnk_08327A88[i] + b * 16;
}
