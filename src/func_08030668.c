#include "types.h"

struct S08030668 {
    u32 a, b;
};

extern u8 *func_08011720(u32);

void func_08030668(u32 a, struct S08030668 *b) {
    *b = *(struct S08030668 *)(func_08011720(a) + 0x1C0);
}
