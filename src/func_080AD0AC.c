extern void func_080ABF00(int, int);
int func_080AD0AC(int *p) {
    if (++p[1] > 15) {
        p[1] = 0;
        p[0] = 10;
        func_080ABF00(p[7], 3);
    }
    return 0;
}
