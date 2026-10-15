#include "types.h"
struct B {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};
extern void func_08006ABC(u32);
extern void func_08005560(struct B *);
void func_0808BAF0(u8 *p) {
    func_08006ABC((*(struct B **)(p + 0x7C))->b);
    func_08005560(*(struct B **)(p + 0x7C));
}
