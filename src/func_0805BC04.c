#include "types.h"
extern void func_08029E54(u32);
void func_0805BC04(u8 *p) {
    u8 *q = p + 0x76;
    switch (*q) {
    case 2:
    case 3:
        func_08029E54(269);
        *q = 1;
    }
}
