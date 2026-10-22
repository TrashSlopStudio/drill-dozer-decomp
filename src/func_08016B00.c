#include "types.h"

extern void func_08017F48(void);

u32 func_08016B00(u32 a) {
    func_08017F48();
    *(u32 *)(a + 0x40C) = 6;
    return 1;
}
