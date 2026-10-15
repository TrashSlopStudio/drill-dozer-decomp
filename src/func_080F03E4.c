#include "types.h"

extern void func_0800098C(void);
extern void func_08001768(void);
extern void func_0800090C(u32);

void func_080F03E4(u32 *p) {
    if (*p) {
        func_0800098C();
        func_08001768();
        func_0800090C(*p);
        *p = 0;
    }
}
