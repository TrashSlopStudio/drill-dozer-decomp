#include "types.h"

extern u32 gUnk_084E656C[];
extern u32 func_080F20A4(void);

u32 func_080F20D8(void) {
    u32 *t = gUnk_084E656C;
    return t[func_080F20A4()];
}
