#include "types.h"

extern void func_08006ABC(u32);
extern void func_08005560(u32);

void func_080C7288(u8 *a) {
    func_08006ABC((u32)(*(u8 *)(*(u32 *)(a + 124) + 35) << 26) >> 27);
    func_08005560(*(u32 *)(a + 124));
}
