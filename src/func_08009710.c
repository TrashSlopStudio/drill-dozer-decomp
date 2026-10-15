extern void func_080096E8(int, int);
void func_08009710(int a, int b, int c) {
    func_080096E8(a, b);
    if (*(int *)(a + 64) != 0) {
        func_080096E8(*(int *)(a + 64), c);
    }
}
