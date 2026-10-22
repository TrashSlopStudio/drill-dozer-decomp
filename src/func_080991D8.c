#include "types.h"

extern void func_08005560();
extern void func_080066B8(u32, u32);

void func_080991D8(u8 *p) {
    if (*(u32 *)(p + 0x504C) != 0) {
        func_08005560();
        func_080066B8(*(u16 *)(p + 0x504A), 4);
    }
}
