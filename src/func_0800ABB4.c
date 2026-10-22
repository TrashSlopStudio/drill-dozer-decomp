#include "types.h"

extern int func_0800B220(int);
extern void func_0800090C(int);
extern int func_0800B234(int, int);
extern void func_0801B700(int);

void func_0800ABB4(int a, int b) {
    if (func_0800B220(b) == 1) {
        func_0800090C(a);
    } else if (func_0800B234(b, 8) != 1) {
        func_0801B700(b);
    }
}
