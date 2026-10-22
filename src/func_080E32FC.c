#include "types.h"
extern void func_08005814(u32, u32);
extern void func_0807EADC(u32, u32);
extern void func_0807E4B4(u32);
void func_080E32FC(u32 a, u32 *b) {
    func_08005814(b[0], b[3]);
    func_0807EADC(a, b[0]);
    if (((u8 *)b[0])[14] == 1) {
        func_0807E4B4(a);
    }
}
