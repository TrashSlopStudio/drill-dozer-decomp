#include "types.h"

extern u8 gUnk_03003A10;
extern void func_080FAAC8(void *, int, int);

u8 *func_080F5C68(void) {
    func_080FAAC8(&gUnk_03003A10, 0, 128);
    return &gUnk_03003A10;
}
