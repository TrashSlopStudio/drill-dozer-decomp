#include "types.h"

extern void func_0806512C(u32);
extern void func_08007034(void);
extern void func_08029E54(u32);
extern void func_08064B10(u8 *);

u32 func_08064AEC(u8 *p) {
    func_0806512C(*(u32 *)(p + 8));
    func_08007034();
    func_08029E54(129);
    func_08064B10(p);
    return 0;
}
