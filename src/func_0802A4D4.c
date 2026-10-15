extern unsigned char *func_08001728(int);
extern unsigned char *gUnk_02035894;

void func_0802A4D4(void) {
    unsigned char **q = &gUnk_02035894;
    unsigned char *p;
    *q = func_08001728(100);
    p = *q + 97;
    *p = 1;
}
