extern void func_080057F0(int a, int b, int c);
void func_08028B0C(unsigned char *a, int *b, int c) {
    int *p;
    int i;
    *(a + 120) = c;
    p = b;
    i = 4;
    do {
        func_080057F0(*p++, 0, 0);
    } while (--i >= 0);
}
