#include "types.h"

struct E {
    u8 pad[9];
    u8 f;
    u8 pad2[2];
};

extern struct E gUnk_08227320[];

u8 func_080126B4(u16 i) {
    if (i > 0x10F) {
        return 0;
    } else {
        return gUnk_08227320[i].f;
    }
}
