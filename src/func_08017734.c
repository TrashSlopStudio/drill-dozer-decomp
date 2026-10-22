#include "types.h"

extern void func_08016924(u32);
extern u32 func_08017C18(u32);
extern void func_08018DD8(void);
extern void func_08017EA0(u32);

void func_08017734(u32 a) {
    func_08016924(a);
    if (func_08017C18(a) != 4) {
        func_08018DD8();
        func_08017EA0(a);
    }
}
