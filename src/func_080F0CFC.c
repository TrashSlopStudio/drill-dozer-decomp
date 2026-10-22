#include "types.h"

u32 func_080F0CFC(int *p) {
    int i = p[1];
    int n = *(int *)(p[22] + i * 20 + 4);
    u32 r;
    if (p[8] < n) {
        p[8]++;
        r = 0;
    } else {
        p[8] = 0;
        p[1] = i + 1;
        r = 1;
    }
    return r;
}
