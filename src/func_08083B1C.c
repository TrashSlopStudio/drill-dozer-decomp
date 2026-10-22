#include "types.h"

extern void func_0802FD6C(int);
extern void func_08017734(int);
extern void func_08011988(int, int, int);

int func_08083B1C(int a) {
    func_0802FD6C(a);
    func_08017734(a);
    func_08011988(a, 0, 0);
    *(int *)(a + 0x48) += 1;
    return 1;
}
