#include "types.h"

extern void func_0807EADC(void *, void *);
extern void func_08005814(void *, u32);
extern void func_0807E4B4(void *);

void func_08080D04(void *a, u32 *b) {
    func_0807EADC(a, (void *)b[0]);
    func_08005814((void *)b[0], b[3]);
    if (*((u8 *)b[0] + 14) == 1)
        func_0807E4B4(a);
}
