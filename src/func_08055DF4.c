#include "types.h"

typedef void (*Fn)(u32, u8 *);
extern Fn gUnk_08304A4C[];
extern void func_08063C9C(void);

void func_08055DF4(u32 a, u8 *b) {
    gUnk_08304A4C[b[4]](a, b);
    func_08063C9C();
}
