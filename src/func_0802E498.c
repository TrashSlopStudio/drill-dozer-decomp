#include "types.h"

extern u32 *func_0802FD44(u32);
extern u8 func_080F8FB8(u32, u32);

void func_0802E498(u32 a) {
    while (func_080F8FB8(a, *func_0802FD44(a)) == 1)
        ;
}
