extern void func_0802140C(int, int);
extern void func_080B06EC(int *);
int func_080B0750(int *a) {
    int *p = (int *)a[1];
    int y = p[1];
    func_0802140C(a[0], y);
    func_080B06EC(a);
    return 0;
}
