#include "types.h"

extern void func_0801C17C(u8 *);

void func_08029684(u8 *a, u8 *b) {
    if (++b[4] > 3) {
        b[4] = 0;
        func_0801C17C(a);
    }
}
