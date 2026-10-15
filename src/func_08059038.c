extern void func_0801C128(int, int, int);
int func_08059038(int a, int b) {
    func_0801C128(a, b, 0);
    {
        unsigned int c = *(unsigned short *)(a + 28);
        unsigned int t = 2;
        t |= c;
        *(unsigned short *)(a + 28) = t;
    }
    return 1;
}
