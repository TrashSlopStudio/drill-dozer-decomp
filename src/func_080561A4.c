#include "types.h"
extern int func_080305C0(int);
extern int func_080560D8(void);
extern void func_08056150(int, int, int, int);
int func_080561A4(int *p) {
    int r = func_080305C0(p[3]);
    int ret;
    if (func_080560D8() != (int)p) {
        ret = 0;
    } else {
        func_08056150(r, 0, 0, 0);
        ret = 1;
    }
    return ret;
}
