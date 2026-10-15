#include "types.h"

struct S960 {
    u8 a;
    u16 b;
    u32 c;
    u8 pad[6];
    u16 e;
    u16 d;
};
struct S950 {
    u16 a, b, c, d, e;
};
extern struct S960 gUnk_03000960;
extern struct S950 gUnk_03000950;

void func_08002C80(void) {
    gUnk_03000960.a = 0;
    gUnk_03000960.b = 0;
    gUnk_03000960.c = 0;
    gUnk_03000960.d = 3;
    gUnk_03000960.e = 20;
    gUnk_03000950.c = 0;
    gUnk_03000950.d = 0;
    gUnk_03000950.e = 0;
    gUnk_03000950.a = 0;
    gUnk_03000950.b = 0;
}
