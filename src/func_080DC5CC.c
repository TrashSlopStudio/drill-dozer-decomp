#include "types.h"

extern void func_08000960(u32);
extern u32 func_0800098C(void);
extern void func_080DC654(u32, u32);
extern void func_080DC5E8(void);

void func_080DC5CC(void) {
    func_08000960((u32)func_080DC5E8);
    func_080DC654(func_0800098C(), 4);
}
