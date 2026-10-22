#include "types.h"
extern void func_08072090(void);
extern u8 *func_08001728(u32 a);
extern void func_0800089C(u32 a, u8 *b, u32 c);
void func_080720D4(u32 a, u32 b) {
    u8 *p = func_08001728(48);
    func_0800089C((u32)func_08072090, p, 0x1801);
    *(u32 *)p = a;
    *(u16 *)(p + 4) = b;
}
