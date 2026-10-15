extern unsigned int gUnk_03000D38;
void func_08006A94(unsigned char n) {
    unsigned int m = 1;
    while (n != 0) {
        n--;
        m <<= 1;
    }
    gUnk_03000D38 |= m;
}
