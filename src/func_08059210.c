extern void func_0801C128(int, int, int);
int func_08059210(int a, int b) {
    unsigned short *p = (unsigned short *)a;
    unsigned int x, t;
    func_0801C128(a, b, 0);
    x = p[14];
    t = 2;
    t |= x;
    p[14] = t;
    return 1;
}
