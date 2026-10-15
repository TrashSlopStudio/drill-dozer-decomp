#include "types.h"
struct B {
    u8 pad[0x21];
    u8 a : 2;
    u8 pad2;
    u8 b : 1;
    u8 c : 5;
};
void func_0802155C(u8 *p) {
    struct B **pp = (struct B **)(p + 0x2AC);
    (*pp)->a = 3;
    (*pp)->c = 0;
}
