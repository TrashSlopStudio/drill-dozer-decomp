extern void func_080067CC(int a, int *b);
extern void func_0807E98C(int a);
void func_080D94F8(int a, int *p) {
    func_080067CC(p[0], &p[1]);
    func_0807E98C(*p);
}
