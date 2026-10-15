#include "types.h"

extern void func_08016924(u8 *);
extern void func_08018DD8(void);
extern void func_08017EA0(u8 *);

u32 func_08016A30(u8 *p) {
    func_08016924(p);
    func_08018DD8();
    func_08017EA0(p);
    *(u32 *)(p + 0x40C) = 1;
    return 0;
}
