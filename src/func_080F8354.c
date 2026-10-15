#include "types.h"

struct T {
    u8 pad[0x40];
    u8 *cmd;
};
extern void (*const gUnk_084F9D14[])(u32, struct T *);

void func_080F8354(u32 a, struct T *t) {
    u8 c = *t->cmd++;
    gUnk_084F9D14[c](a, t);
}
