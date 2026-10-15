#include "types.h"

extern void *func_08001728(u32);
extern void func_0806D608(u8 *);

void func_0806D878(u8 *p) {
    *(void **)(p + 0x388) = func_08001728(16);
    func_0806D608(p);
}
