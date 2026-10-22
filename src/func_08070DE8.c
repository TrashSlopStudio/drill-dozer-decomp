#include "types.h"
extern u16 func_080051DC(void);
void func_08070DE8(u32 a, u8 *p) {
    if (p[21] == 4) {
        p[21] = 0;
        p[22] = func_080051DC() % 5;
    }
}
