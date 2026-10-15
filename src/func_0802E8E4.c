extern void func_08011834(int, int *);
extern void func_0802E8D0(int *, int);
void func_0802E8E4(int a, int b) {
    int x;
    func_08011834(a, &x);
    func_0802E8D0(&x, b);
}
