#include "types.h"

extern void func_080BF06C(u8 *);
extern void func_080EDBA8(void);

void func_080BEF4C(u8 *p) {
    func_080BF06C(p + 188);
    if (p[3] != 0) {
        p[3] = 0;
        func_080EDBA8();
    }
}
