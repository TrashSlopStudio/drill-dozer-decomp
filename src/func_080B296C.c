extern int func_080B27D8(void);

void func_080B296C(int a, int b) {
    unsigned char *p = (unsigned char *)func_080B27D8();
    *(unsigned short *)(p + 78) = a;
    *(unsigned short *)(p + 82) = b;
}
