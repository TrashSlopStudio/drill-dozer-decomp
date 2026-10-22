#include "types.h"

extern void func_0800B260(u32, u32);
extern void func_08017C24(u32, u32);
extern void func_0801B0B4(u32);
extern void func_0801B1C4(u32 *);

u32 func_08070340(u32 *p) {
    func_0800B260(p[3], 1);
    func_08017C24(p[3], 0);
    func_0801B0B4(((u8 *)p)[20]);
    func_0801B1C4(p);
    return 5;
}
