#include "types.h"

extern void func_0807E5AC(u8 *);
extern void func_0807E7E8(void);

void func_0807E4B4(u8 *p) {
    void (*f)(u8 *, u8 *) = *(void (**)(u8 *, u8 *))(p + 0xB8);
    if (f != 0)
        f(p, p + 0x28);
    func_0807E5AC(p);
    func_0807E7E8();
}
