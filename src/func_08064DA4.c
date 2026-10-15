extern void func_0802E57C(int, int *);
extern int func_08012D78(int *, int);

int func_08064DA4(int *a) {
    int x[2];
    func_0802E57C(*a, x);
    return func_08012D78(x, (int)a + 40);
}
