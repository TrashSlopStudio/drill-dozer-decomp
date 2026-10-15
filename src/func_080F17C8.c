extern int func_0800B234(int, int);
extern void func_080F14C8(int, int);

int func_080F17C8(int a, int b, int c, int d) {
    int r;
    if (func_0800B234(*(int *)(a + 0x24), 0x59) == 0) {
        func_080F14C8(a, d);
        r = 1;
    } else
        r = 0;
    return r;
}
