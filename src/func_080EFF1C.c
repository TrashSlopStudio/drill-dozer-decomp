#include "types.h"

extern void func_08012C08(int, int, int, int);

void func_080EFF1C(int a) {
    int x;
    int y;
    func_08012C08(a + 60, a + 36, 1, 1);
    x = *(int *)(a + 60);
    y = *(int *)(a + 64);
    *(int *)(a + 44) = x;
    *(int *)(a + 48) = y;
    *(int *)(a + 52) = x;
    *(int *)(a + 56) = y;
}
