#include "types.h"
extern int func_08020E9C(int, int);
extern void func_08019E48(int, int, int, int);
void func_080B39B0(int a, u8 *b) {
    int r = func_08020E9C(1, 0);
    func_08019E48(256, 16, *b, r);
}
