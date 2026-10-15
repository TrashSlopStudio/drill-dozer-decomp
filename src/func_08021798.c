extern void func_08005560(int);
void func_08021798(int a) {
    int *p = (int *)(a + 688);
    func_08005560(*p);
    *p = 0;
}
