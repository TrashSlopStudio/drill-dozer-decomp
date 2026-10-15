extern unsigned char func_08019B88(void);
extern void func_0807E4B4(int);
extern void func_08068554(int, int);

int func_080DC28C(int *p) {
    int r;
    if (!func_08019B88()) {
        func_0807E4B4(p[8]);
        func_08068554(p[6], 0);
        r = 2;
    } else {
        r = 0;
    }
    return r;
}
