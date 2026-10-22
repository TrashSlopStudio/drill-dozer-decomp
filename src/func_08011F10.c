#include "types.h"

extern u8 gUnk_020347BC[];

void func_08011F10(u8 a) {
    if (a != 0xFF) {
        gUnk_020347BC[a] &= ~1;
    }
}
