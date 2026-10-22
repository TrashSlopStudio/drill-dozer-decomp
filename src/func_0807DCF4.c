extern int gUnk_030019B8[];
extern void func_0807E004(int, int);

void func_0807DCF4(int a) {
    int i;
    int *p = gUnk_030019B8;
    for (i = 2; i >= 0; i--) {
        if (*p != 0)
            func_0807E004(a, *p);
        p++;
    }
}
