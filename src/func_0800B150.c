#include "types.h"

extern u32 func_08019B88(void);
extern void func_08009F7C(int a);
extern void func_0800A87C(int a, int b);
extern void func_0800090C(int a);

void func_0800B150(int a, int b) {
    if ((u8)func_08019B88() == 0) {
        func_08009F7C(b);
        func_0800A87C(b, 4);
        func_0800090C(a);
    }
}
