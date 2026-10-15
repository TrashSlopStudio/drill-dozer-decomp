#include "types.h"

extern void func_080627BC(u8 *p);
extern void func_080B06EC(u8 *p);

u32 func_080B0C44(u8 *p) {
    func_080627BC(p);
    func_080B06EC(p);
    return 0;
}
