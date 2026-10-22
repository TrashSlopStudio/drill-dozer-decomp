#include "types.h"

struct E {
    u32 key;
    u16 val;
    u16 pad;
};

extern struct E gUnk_02035A8C[];

s32 func_08049624(u32 key) {
    s32 i;
    struct E *p;
    for (i = 0, p = gUnk_02035A8C; i < 8; p++, i++) {
        if (p->key == key)
            return p->val;
    }
    return -1;
}
