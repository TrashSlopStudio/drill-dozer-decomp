#include "types.h"

extern void func_0800B248(u32, u32);
extern void func_0800AE60(u32, u8);

void func_0806D3DC(u8 *p) {
    func_0800B248(*(u32 *)(p + 12), 1);
    func_0800AE60(*(u32 *)(p + 12), p[172]);
}
