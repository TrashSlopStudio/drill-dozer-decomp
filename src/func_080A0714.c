extern void func_080A0730(int, int);
extern void func_0801AEF0(int, int);
void func_080A0714(int a) {
    int *p = (int *)(a + 124);
    func_080A0730(a, (int)p);
    func_0801AEF0(a, p[1]);
}
