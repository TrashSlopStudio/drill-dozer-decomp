extern void func_0809110C(int);
void func_08090FC4(int a) {
    int *p;
    int i;
    p = (int *)(a + 124);
    i = 2;
    do {
        func_0809110C(*p++);
    } while (--i >= 0);
}
