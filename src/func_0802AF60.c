#include "types.h"

extern void func_0800C078(void);
extern u8 *gUnk_02035898;

void func_0802AF60(void) {
    u8 *p;
    func_0800C078();
    p = gUnk_02035898;
    if (p[12] == 0) {
        p[12] = 1;
        p[13] = 0;
    } else if (p[13] != 0) {
        p[13] = 0;
    }
}
