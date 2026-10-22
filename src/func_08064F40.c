#include "types.h"
extern void func_08064C14();
void func_08064F40(u32 *p, u32 b, u32 c) {
    func_08064C14(p[0], b, (u8 *)p + 28, *((u8 *)p + 55));
    p[6] = 1;
    p[7] = 0;
    p[3] = c;
}
