#include "types.h"

extern int func_0800089C(void *, void *, int);
extern void func_080DBB90(void);

void func_080DBB1C(u8 *p) {
    if (p[10] == 0) {
        func_0800089C(func_080DBB90, p, 0x1802);
        p[10] = 1;
    }
}
