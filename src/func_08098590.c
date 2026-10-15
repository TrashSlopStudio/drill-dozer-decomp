#include "types.h"

extern int func_08098BC0(int);
extern void func_08098BB8(int, int);
int func_08098590(int a, int b) {
    if (func_08098BC0(b) == 1)
        func_08098BB8(b, 2);
    return 1;
}
