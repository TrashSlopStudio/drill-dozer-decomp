#include "types.h"

extern s32 func_0807956C(u32);
extern void func_080793C8(u32, u32);

void func_080788D0(u32 a, u32 b) {
    switch (func_0807956C(b)) {
    case 0:
    case 1:
        break;
    case 2:
        func_080793C8(b, 3);
        break;
    }
}
