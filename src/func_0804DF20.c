extern void func_0800AE60(int, int);

void func_0804DF20(unsigned char *p) {
    unsigned char *q = p + 0x76;
    unsigned char z = 0;
    *q = 11;
    p[0x74] = z;
    p[0x75] = z;
    func_0800AE60(*(int *)(p + 12), p[0xA8]);
}
