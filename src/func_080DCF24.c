extern void func_080057F0(int, int, int);

int func_080DCF24(int p, int v) {
    int *s = (int *)(p + 0x7c);
    unsigned char *q = (unsigned char *)(p + 0x78);
    unsigned d = *q ^ v;
    int r = (-d | d) >> 31;
    *q = v;
    func_080057F0(s[1], 0, 0);
    return r;
}
