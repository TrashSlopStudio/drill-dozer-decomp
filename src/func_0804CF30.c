#include "types.h"

extern void func_0804CF84(void);
extern u32 func_0807E694(void (*f)(void));

u32 func_0804CF30(void) {
    if (func_0807E694(func_0804CF84) == 0)
        return 1;
    return 0;
}
