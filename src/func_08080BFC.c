#include "types.h"

extern void func_08005BBC(u32, u32, u32);
extern void func_0807EADC(u8 *, u32);
extern void func_0807E4B4(u8 *);

void func_08080BFC(u8 *a, u8 *b) {
    func_08005BBC(*(u32 *)(b + 24), *(u32 *)(b + 48), 0);
    func_0807EADC(a, *(u32 *)(b + 24));
    if (*(u8 *)(*(u32 *)(b + 24) + 14) == 1)
        func_0807E4B4(a);
}
