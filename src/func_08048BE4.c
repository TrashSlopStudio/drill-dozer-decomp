extern int gUnk_02035A78;
extern void func_0800090C(int);
extern void func_08011A20(int, int);

void func_08048BE4(void) {
    int *p = &gUnk_02035A78;
    if (p[1] != 0) {
        func_0800090C(p[1]);
        p[1] = 0;
        func_08011A20(p[0], 1);
    }
}
