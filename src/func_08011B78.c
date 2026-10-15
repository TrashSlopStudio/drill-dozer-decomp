#include "types.h"

extern u32 func_08011B74(u8 *p);
extern void func_08029E54(u32);

void func_08011B78(u8 *p, u32 id) {
    if (func_08011B74(p) == 0)
        func_08029E54((u16)id);
}
