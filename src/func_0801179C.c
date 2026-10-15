extern int *func_08011720(void);
extern void func_08006750(int, unsigned char *, unsigned char *);
void func_0801179C(unsigned char *a, unsigned char *b) {
    int *p = func_08011720();
    func_08006750(p[0xac], b, b + 2);
}
