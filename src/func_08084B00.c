#include "types.h"
extern void func_08085064(u32, u32);
extern void func_08084DE0(u32, u32);
extern void func_08084E80(u32, u32, u32);
extern void func_08084F0C(u32, u32);
void func_08084B00(u32 a) {
    u32 b = a + 124;
    func_08085064(a, b);
    func_08084DE0(a, b);
    func_08084E80(a, b, 1);
    func_08084F0C(a, b);
}
