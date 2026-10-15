#include "types.h"

extern void func_08011834(int a, int *b);
extern void func_0802E520(int a, int *b, int c);

void func_0802E55C(int a, int b) {
    int x;
    func_08011834(a, &x);
    func_0802E520(a, &x, b);
}
