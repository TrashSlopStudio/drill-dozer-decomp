#include "types.h"

extern u32 func_08030500(u16 *p);
extern u16 func_080119F0(u16 *p, u16 m);

u32 func_080304D8(u16 *p) {
    if (func_080119F0(p, func_08030500(p)) != 0)
        return 1;
    return 0;
}
