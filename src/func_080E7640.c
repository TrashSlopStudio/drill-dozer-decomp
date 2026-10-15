#include "types.h"

extern void func_080E7668(int, int, int);
extern void func_0801AEF0(int, int);

void func_080E7640(int a) {
    func_080E7668(a, a + 124, 0);
    func_0801AEF0(a, *(int *)(a + 124));
}
