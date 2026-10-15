#include "types.h"

extern u32 func_08031078(u8 *);
extern void func_08030768(u8 *);
extern void func_080310A0(u8 *);

u32 func_080D8530(u8 *p) {
    if (func_08031078(p) == 1) {
        func_080310A0(p);
        return 2;
    }
    func_08030768(p);
    return 0;
}
