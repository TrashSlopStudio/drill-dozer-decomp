#include "types.h"

extern void func_08020EE4(void *);
extern void func_08020E38(void *);
extern void func_08020E54(void);
extern void func_080FAAC8(void *, int, int);

void func_08020F08(u8 *p) {
    func_08020EE4(p);
    func_08020E38(p);
    func_08020E54();
    func_080FAAC8(p + 924, 0, 36);
}
