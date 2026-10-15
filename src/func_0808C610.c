extern void func_08005560(int);
void func_0808C610(int a) {
    int *p;
    int i;
    p = (int *)(a + 124);
    i = 2;
    do {
        func_08005560(*p++);
    } while (--i >= 0);
}
