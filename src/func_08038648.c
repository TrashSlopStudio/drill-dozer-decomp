#include "types.h"

extern int func_08011B74(void);
extern void func_08011B28(void);

void func_08038648(int a, int b) {
    int *p;
    if (func_08011B74() != 1) {
        p = (int *)(a + 244);
        if (*p == 0) {
            func_08011B28();
        }
        *p = *p + 1;
        if (*p >= b) {
            *p = 0;
        }
    }
}
