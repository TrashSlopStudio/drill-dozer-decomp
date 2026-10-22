#include "types.h"
extern void func_080A0100(int);
extern void func_0800089C(int, int, int);
void func_080A00C4(int a, int *b) {
    func_080A0100((int)b);
    func_0800089C(0x080A00E9, *b, 0x1801);
}
