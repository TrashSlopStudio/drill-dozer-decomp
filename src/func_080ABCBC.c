extern void func_080067CC(int, int);
extern void func_0801B064(int);
void func_080ABCBC(int a) {
    int *p = (int *)(a + 124);
    func_080067CC(p[5], a + 148);
    func_0801B064(p[5]);
}
