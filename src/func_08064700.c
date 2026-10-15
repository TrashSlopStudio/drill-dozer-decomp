#include "types.h"
extern void func_0800B254(int, int);
extern void func_08064B10(int);
int func_08064700(int a) {
    func_0800B254(*(int *)(a + 8), *(u16 *)(*(int *)(a + 76) + 4));
    func_08064B10(a);
    return 1;
}
