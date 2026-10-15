#include "types.h"

typedef void (*Fn)(u32, u8 *);
extern Fn gUnk_08374444[];
extern void func_08005610(void);
extern void func_08019B44(void);

void func_0807811C(u32 a, u8 *b) {
    gUnk_08374444[*b](a, b);
    func_08005610();
    func_08019B44();
}
