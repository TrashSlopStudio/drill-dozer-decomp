void func_0806795C(unsigned char *a) {
    int i = 0;
    unsigned short *p;
    do {
        p = (unsigned short *)(a + 0x4c) + i;
        *p = (a[0x1f] << 12) | i;
        i++;
    } while (i <= 0x1ff);
}
