#include "types.h"

extern u8 gUnk_0829E258[];
extern void func_0800196C(u32, void *, u32, u32);
extern void func_0803306C(void *);
extern void func_08002248(u32);

void func_08033044(void *p) {
    func_0800196C(2, gUnk_0829E258, 0x4000, 0);
    func_0803306C(p);
    func_08002248(2);
}
