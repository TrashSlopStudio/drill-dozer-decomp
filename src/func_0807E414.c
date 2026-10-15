extern int func_080F8700(int, int);

int func_0807E414(int a, int b) {
    int r = func_080F8700((b << 3) * *(unsigned char *)(a + 0x40), *(short *)(a + 12));
    if (r == 0 && b > 0)
        r = 1;
    return r;
}
