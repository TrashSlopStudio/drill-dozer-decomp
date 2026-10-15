#include "types.h"
extern int gUnk_02039164;
extern int gUnk_02039064[];
int func_0807E890(void) {
    if (gUnk_02039164 <= 0)
        return 0;
    gUnk_02039164--;
    return gUnk_02039064[gUnk_02039164];
}
