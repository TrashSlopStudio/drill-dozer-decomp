#include "types.h"

extern void func_08019950(int, int, int);

void func_080B72AC(u32 a) {
    if (a <= 1) {
        func_08019950(-1, 16, 0);
    } else if (a <= 4) {
        func_08019950(-1, 16, 0x7FFF);
    }
}
