#include "types.h"

extern void func_08067ED0(u8 *p);

void func_080680EC(u32 a, u8 *p) {
    if (*(u32 *)(p + 8) != 0 && p[20] == 0)
        func_08067ED0(p);
}
