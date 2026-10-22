#include "types.h"
extern u8 gUnk_0810182C[];
int func_08016658(int i) {
    u32 v = (u32)(gUnk_0810182C[i * 8] << 28) >> 29;
    switch (v) {
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        return 2;
    }
}
