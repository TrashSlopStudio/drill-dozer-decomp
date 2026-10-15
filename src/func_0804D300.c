extern void func_08005560(int);

void func_0804D300(int a) {
    int *p;
    int i;
    p = (int *)(a + 124);
    i = 1;
    do {
        func_08005560(*p++);
    } while (--i >= 0);
}
