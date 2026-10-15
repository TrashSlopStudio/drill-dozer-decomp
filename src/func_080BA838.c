#include "types.h"

extern void func_080EDBA8(void);

void func_080BA838(u8 *p) {
    if (p[7]) {
        p[7] = 0;
        func_080EDBA8();
    }
}
