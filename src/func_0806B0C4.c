#include "types.h"

typedef void (*Fn)(u32, u8 *);

extern Fn gUnk_08339F5C[];
extern void func_08063C9C(void);
extern void func_08063FBC(void);

void func_0806B0C4(u32 a, u8 *b) {
    gUnk_08339F5C[b[5]](a, b);
    func_08063C9C();
    func_08063FBC();
}
