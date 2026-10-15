#include "types.h"

extern void *gUnk_02035A6C;
extern void func_08001768(void *);

void func_08038F1C(void) {
    if (gUnk_02035A6C != 0) {
        func_08001768(gUnk_02035A6C);
        gUnk_02035A6C = 0;
    }
}
