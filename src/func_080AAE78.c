extern void func_080057F0(int, int, int);

int func_080AAE78(int a, unsigned char *b, int c) {
    int r;
    if (a != *b) {
        func_080057F0(c, 0, 0);
        *b = a;
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
