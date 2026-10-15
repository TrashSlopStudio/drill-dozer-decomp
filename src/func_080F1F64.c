#include "types.h"

extern void func_080F20F0(u8 *);
extern void func_080F2130(void);
extern void func_080F2520(s16, s16);

void func_080F1F64(u8 *p) {
    func_080F20F0(p);
    func_080F2130();
    func_080F2520(*(s16 *)(p + 0x24), *(s16 *)(p + 0x26));
}
