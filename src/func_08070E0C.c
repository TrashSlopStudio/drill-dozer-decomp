extern int func_0801C030(int, int, int);

void func_08070E0C(int a, unsigned char **q) {
    int v;
    unsigned char *p;
    if (func_0801C030(a, 16, 16) == 0) {
        p = q[0];
        v = 1;
    } else {
        p = q[0];
        v = 0;
    }
    p[1] = v;
    q[1][1] = v;
    q[2][1] = v;
}
