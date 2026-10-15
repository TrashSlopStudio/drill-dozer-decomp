extern unsigned char gUnk_02034C3E[];
int func_08012884(int a) {
    int i;
    for (i = 0; i < 8; i++) {
        if (gUnk_02034C3E[i] == a) {
            gUnk_02034C3E[i] |= 0xff;
            return 1;
        }
    }
    return 0;
}
