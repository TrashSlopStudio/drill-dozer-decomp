#include "types.h"
extern void func_080A7D88(int, int);
extern void func_08011B94(int, int);
int func_080A7160(int a, int *b) {
    *b = 2;
    func_080A7D88(b[15], 2);
    func_08011B94(*(int *)(a + 12), 87);
    return 1;
}
