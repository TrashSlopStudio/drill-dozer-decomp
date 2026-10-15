#include "types.h"

extern void func_08030190(u32, u32, u32);
extern void func_0802140C(u32, u32);
extern void func_080B06EC(u32 *);

u32 func_080B1370(u32 *p) {
    func_08030190(*p, 156, 109);
    func_0802140C(*p, 74);
    func_080B06EC(p);
    return 1;
}
