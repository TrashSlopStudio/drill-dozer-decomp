extern int func_0801B5D0(void);
int func_08029890(int a) {
    int r = func_0801B5D0();
    if (r == 2) {
        *(unsigned char *)(a + 0x76) = 7;
    } else if (r == 1) {
        *(unsigned char *)(a + 0x76) = 5;
    }
    return r;
}
