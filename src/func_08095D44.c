#include "types.h"

extern s32 func_08095C64(void);
extern s32 func_08095D34(void);

s32 func_08095D44(void) {
    if (func_08095C64() == 20)
        return -1;
    return func_08095D34();
}
