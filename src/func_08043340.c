#include "types.h"

extern void func_08010E20(void);
extern void func_080673E0(u32);
extern void func_0800B380(u8 *, u32);

void func_08043340(u8 *p) {
    func_08010E20();
    func_080673E0(1);
    func_0800B380(p, 1);
}
