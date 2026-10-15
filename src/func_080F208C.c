#include "types.h"

extern void func_080F2054(u32, u32);
extern void func_080F224C(u32, u32);

void func_080F208C(u32 a, u32 b) {
    func_080F2054(a, b);
    func_080F224C(a, b);
}
