#include "types.h"

extern int func_08011720(void);
extern void func_080B34A0(int, int);
extern void func_08019DC8(int, int, int);

void func_080B3B7C(void) {
    func_080B34A0(func_08011720(), 3);
    func_08019DC8(0x10000, 8, 0);
}
