#include "types.h"

extern void func_080C1790(void *);
extern void func_080BE84C(void);
extern void func_080BEE20(void *);
extern void func_080BEF4C(void *);
extern void func_080BEEE4(void);
extern void func_080BF124(void);

void func_080BE248(u8 *p) {
    func_080C1790(p + 24);
    func_080BE84C();
    func_080BEE20(p + 16);
    func_080BEF4C(p);
    func_080BEEE4();
    func_080BF124();
}
