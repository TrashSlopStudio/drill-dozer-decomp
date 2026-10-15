#include "types.h"

struct S08006824 {
    u32 a;
    u32 b;
    u32 c;
};

extern struct S08006824 gUnk_02023848[];
extern void func_080061F0(u8);

void func_08006824(u8 idx, struct S08006824 *src) {
    gUnk_02023848[idx] = *src;
    func_080061F0(idx);
}
