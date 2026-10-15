#include "types.h"

extern void func_080FAAC8(void *, int, int);
extern void func_0800090C(u32);

void func_0807E5AC(u8 *a) {
    *(u32 *)a = 0;
    func_080FAAC8(a + 40, 0, 128);
    func_0800090C(*(u32 *)(a + 32));
}
