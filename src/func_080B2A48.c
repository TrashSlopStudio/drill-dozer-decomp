#include "types.h"

extern u8 *func_080B27D8(void);
extern void func_080B2B1C(void);

void func_080B2A48(u32 a) {
    func_080B27D8()[0x54] = a;
    func_080B2B1C();
}
