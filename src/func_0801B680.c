extern int *gUnk_02035868;
extern void func_0801B1C4(int *);

void func_0801B680(void) {
    int *p = gUnk_02035868;
    int i = 63;
    while (i >= 0) {
        if (p[3] != 0)
            func_0801B1C4(p);
        i--;
        p += 63;
    }
}
