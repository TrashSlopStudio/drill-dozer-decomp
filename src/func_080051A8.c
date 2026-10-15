#include "types.h"

u16 func_080051A8(u32 *p) {
    *p = *p * 0x41C64E6D + 12345;
    return *p >> 16;
}
