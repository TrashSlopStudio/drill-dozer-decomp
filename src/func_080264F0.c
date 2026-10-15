#include "types.h"

extern u16 func_08012588(u8);

void func_080264F0(u8 *p, u8 b) {
    if (func_08012588(b)) {
        p[2]--;
    }
}
