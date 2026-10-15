#include "types.h"

extern void (*gUnk_0848FCBC[])(u32, u8 *);
extern void func_08005610(void);
extern void func_08019B44(void);

void func_080DF090(u32 a, u8 *b) {
    gUnk_0848FCBC[b[12]](a, b);
    func_08005610();
    func_08019B44();
}
