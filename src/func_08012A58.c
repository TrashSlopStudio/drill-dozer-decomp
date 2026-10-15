#include "types.h"

struct Rec {
    u32 a, b, c;
};

extern struct Rec gUnk_08227320[];

struct Rec *func_08012A58(s32 a) {
    if (a > 0x10F)
        return 0;
    return &gUnk_08227320[a];
}
