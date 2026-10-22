extern void func_0800B254(int, int);
extern char *func_08001728(int);
extern void func_0800089C(void (*)(void), char *, int);
extern void func_08006F78(void);

void func_08006F4C(int a) {
    char *p;
    func_0800B254(a, 0x7f);
    p = func_08001728(12);
    *(int *)p = a;
    p[8] = 6;
    func_0800089C(func_08006F78, p, 0x5000);
}
