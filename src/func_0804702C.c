#include "types.h"

extern void func_0801B064(u32);

void func_0804702C(u32 *p) {
    u32 *q = p + 31;
    func_0801B064(p[31]);
    func_0801B064(q[1]);
    if (q[2] != 0) {
        func_0801B064(q[2]);
    }
    if (q[3] != 0) {
        func_0801B064(q[3]);
    }
}
