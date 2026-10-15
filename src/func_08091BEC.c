extern void func_0801174C(int, short *, short *);
extern int func_08091B88(int *, short *, int);

int func_08091BEC(int *p) {
    short a[2];
    func_0801174C(p[3], &a[0], &a[1]);
    return func_08091B88(p, a, 16);
}
