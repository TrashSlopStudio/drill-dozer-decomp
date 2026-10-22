#include "types.h"
extern void func_08000F28(u32, u32);
extern void func_08002160(u32);
extern void func_080038A4(void);
void func_08079228(void) {
    func_08000F28(0x50, 0);
    func_08000F28(0x52, 0);
    func_08002160(0);
    func_08002160(1);
    func_08002160(2);
    func_080038A4();
}
