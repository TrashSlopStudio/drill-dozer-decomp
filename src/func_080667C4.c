extern char *func_08001728();
extern int func_0800089C();
extern void func_080665C4();
int func_080667C4(int a) {
    char *p = func_08001728(32);
    int r = func_0800089C(func_080665C4, p, 0x5806);
    p[28] = a;
    return r;
}
