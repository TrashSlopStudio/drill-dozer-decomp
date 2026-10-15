#include "types.h"

extern void func_0806D59C(u32, u32, u32);
extern void func_080B06EC(u32 *);

u32 func_080B07AC(u32 *a) {
    func_0806D59C(a[0], ((u32 *)a[1])[1], ((u32 *)a[1])[2]);
    func_080B06EC(a);
    return 0;
}
