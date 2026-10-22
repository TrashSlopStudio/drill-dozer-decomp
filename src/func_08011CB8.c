#include "types.h"

extern u8 func_080118A8(int);
extern void func_0802FF64(int, int);

int func_08011CB8(int *p) {
    u8 r = func_080118A8(p[3]);
    if (r != 0) {
        if (r != 11) {
            return 0;
        }
        func_0802FF64(p[3], 0);
    }
    return 1;
}
