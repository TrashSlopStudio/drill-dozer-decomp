extern char *func_0801AF20(int a, int b);
extern int func_08012810(int a);
char *func_0801B3A8(int a, unsigned char b, int c) {
    char *r = func_0801AF20(a, b);
    int v = func_08012810(c);
    unsigned char *p = (unsigned char *)(r + 0x25);
    int t = v << 4;
    *p = (*p & 15) | t;
    return r;
}
