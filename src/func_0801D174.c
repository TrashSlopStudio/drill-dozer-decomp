extern int gUnk_03001240[];
extern void func_0801D194(int *);

void func_0801D174(void) {
    int *p = gUnk_03001240;
    int i = 23;
    do {
        func_0801D194(p);
        p++;
    } while (--i >= 0);
}
