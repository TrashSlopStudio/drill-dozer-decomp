#include "types.h"

struct S {
    u8 pad[0x10];
    u16 a;
};

extern struct S gUnk_03000010;
extern void func_080009D8(void);
extern void func_08000D60(void);

void func_08000994(void) {
    func_080009D8();
    gUnk_03000010.a = 0;
    func_08000D60();
}
