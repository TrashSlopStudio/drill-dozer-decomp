extern void func_0801B04C(int);

void func_0801D624(int a) {
    int *p;
    int i;
    p = (int *)(a + 36);
    i = 3;
    do {
        func_0801B04C(*p++);
    } while (--i >= 0);
}
