#include "types.h"

extern u8 gUnk_084443C0[];
extern void func_08005814(u32, void *);

void func_080BCB10(u32 *p) {
    if (*p != 0) {
        func_08005814(*p, gUnk_084443C0);
    }
}
