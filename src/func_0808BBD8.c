#include "types.h"

extern void func_0804CEDC(u32, u8 *, u32, u32);
extern void func_08029E54(u32);
extern void func_0801B1C4(u8 *);

void func_0808BBD8(u8 *p) {
    func_0804CEDC(*(u32 *)(p + 12), p + 36, 1, 0);
    func_08029E54(70);
    func_0801B1C4(p);
}
