#include "types.h"
extern void func_0800B260(int, int);
extern void func_08064B10(int);
int func_0806471C(int a) {
    func_0800B260(*(int *)(a + 8), *(u16 *)(*(int *)(a + 76) + 4));
    func_08064B10(a);
    return 1;
}
