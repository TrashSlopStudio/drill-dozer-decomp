extern unsigned char *gUnk_0203603C;
int func_08062408(unsigned char a, unsigned char b) {
    if (gUnk_0203603C == 0)
        return 0;
    gUnk_0203603C[11] = a;
    gUnk_0203603C[12] = b;
    return 1;
}