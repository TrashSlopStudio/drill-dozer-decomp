#include "types.h"

extern void func_080B649C(u8 *);
extern void func_080B666C(u8 *);
extern void func_080B67E8(u8 *);
extern void func_080EDBA8(void);

void func_080B63B0(u8 *a) {
    func_080B649C(a + 16);
    func_080B666C(a + 40);
    func_080B67E8(a + 72);
    if (a[11] != 0) {
        func_080EDBA8();
    }
}
