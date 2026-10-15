#include "types.h"

extern void func_08005BBC(int, int, int);
extern int *gUnk_082B9974[];

void func_0803EDB4(int *p) {
    int v = gUnk_082B9974[p[1]][p[2]];
    func_08005BBC(p[17], v, 3);
}
