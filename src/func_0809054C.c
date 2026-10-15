extern void func_0801C128(int, int, int);

int func_0809054C(int a, int b) {
    unsigned char *p = (unsigned char *)(a + 0x76);
    if (*p != 5) {
        *p = 6;
        func_0801C128(a, b, 1);
        return 1;
    }
    func_0801C128(a, b, 0);
    return 1;
}
