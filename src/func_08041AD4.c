extern void func_0801B064(int);

void func_08041AD4(int a) {
    int *p;
    int i;
    p = (int *)(a + 124);
    i = 2;
    do {
        func_0801B064(*p++);
    } while (--i >= 0);
}
