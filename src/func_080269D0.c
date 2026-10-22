#include "types.h"
extern void func_080264F0(u32, u32);
extern void func_08012568(u32, u32);
extern void func_08026868(u8 *);
extern void func_080561A4(u8 *);
void func_080269D0(u8 *p) {
    u8 *q = p + 0x7c;
    func_080264F0(*(u32 *)(q + 20), *(u16 *)(q + 8));
    func_08012568(p[20], 0);
    func_08026868(p);
    func_080561A4(p);
}
