extern void func_08005560(int a);
void func_0808CB20(int a) {
    int *p = (int *)(a + 124);
    int i = 1;
    do {
        func_08005560(*p++);
    } while (--i >= 0);
}
