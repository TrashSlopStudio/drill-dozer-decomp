extern void func_080A8870(int, int);
extern void func_08001768(int);
void func_080A9488(int a) {
    int *p = (int *)(a + 124);
    int q = p[1];
    func_080A8870(a, q);
    if (q != 0) {
        func_08001768(q);
    }
}
