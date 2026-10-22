#include "types.h"

extern int func_0809AF48(void);
extern void func_0807E5AC(u32);
extern void func_0809AF74(u32, u32 *);

void func_0809AEA4(u32 a, u32 *b) {
    if (func_0809AF48() == 0) {
        func_0807E5AC(a);
    } else {
        func_0809AF74(a, b);
        *(u8 *)(b[4] + 1) = b[3];
    }
}
