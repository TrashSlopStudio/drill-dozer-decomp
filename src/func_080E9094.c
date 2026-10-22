#include "types.h"
extern int func_0806B864(void);
extern void func_080E94CC(u32);
extern void func_0806B820(u32, int);
int func_080E9094(u32 *p) {
    if (func_0806B864() != 1) {
        func_080E94CC(p[14]);
        func_0806B820(p[14], 7);
        p[6] = 1;
        p[0]++;
    }
    return 0;
}
