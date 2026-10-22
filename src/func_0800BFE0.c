extern unsigned short gUnk_08221228[];

void func_0800BFE0(int p, unsigned int i) {
    unsigned short v;
    if (i > 10)
        i = 0;
    *(unsigned char *)(p + 0x72) = i;
    v = gUnk_08221228[i];
    *(unsigned short *)(p + 0x110) = v;
}
