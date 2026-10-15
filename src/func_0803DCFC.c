#include "types.h"

extern void func_08001D1C(s32, s32, s32);
extern void func_08001E94(s32, s32, s32);

void func_0803DCFC(s16 *a) {
    func_08001D1C(3, a[0] << 8, 0);
    func_08001E94(3, a[1] << 8, 0);
}
