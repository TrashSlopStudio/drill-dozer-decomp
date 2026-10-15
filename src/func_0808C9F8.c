extern void func_08005560(int);
void func_0808C9F8(int a) {
    int *p;
    int i;
    p = (int *)(a + 124);
    i = 5;
    do {
        func_08005560(*p++);
    } while (--i >= 0);
}
