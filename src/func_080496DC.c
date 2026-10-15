extern int func_08049624(void);
extern void func_0804964C(int);
int func_080496DC(int a) {
    int r;
    if (func_08049624() != -1) {
        func_0804964C(a);
        r = 1;
    } else
        r = 0;
    return r;
}
