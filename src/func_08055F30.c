#include "types.h"

extern u32 func_08062760(void);
extern void func_08056098(u32, u32, u32);

void func_08055F30(u32 a, u32 b) {
    if (func_08062760())
        func_08056098(a, b, 4);
}
