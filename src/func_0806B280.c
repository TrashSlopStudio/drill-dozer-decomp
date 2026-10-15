#include "types.h"

extern u32 func_08062760(void);
extern void func_08064020(void);
extern void func_0806B524(u32, u32, u32);

void func_0806B280(u32 a, u32 b) {
    if (func_08062760()) {
        func_08064020();
        func_0806B524(a, b, 5);
    }
}
