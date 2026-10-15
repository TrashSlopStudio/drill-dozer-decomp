extern unsigned char *func_080685BC(int);
extern void func_0806B820(int, int);

int func_080DC174(int *p) {
    unsigned char *q = func_080685BC(p[6]);
    int one = 1;
    q[11] = one;
    q[13] = one;
    func_0806B820(p[7], 2);
    p[5] = one;
    p[0] = 8;
    return 0;
}
