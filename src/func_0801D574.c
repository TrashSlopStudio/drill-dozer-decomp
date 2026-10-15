extern int func_0801D510(void);

void func_0801D574(int a) {
    int *p;
    int i;
    p = (int *)(a + 36);
    i = 3;
    do {
        *p++ = func_0801D510();
    } while (--i >= 0);
}
