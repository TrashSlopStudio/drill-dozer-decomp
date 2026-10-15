extern int *gUnk_02035898;
extern void func_0802AEF4(int *);
extern int func_0800089C(int, int *, int);
void func_0802AEC8(int a) {
    int *p = gUnk_02035898;
    p[1] = a;
    func_0802AEF4(p);
    p[2] = func_0800089C(0x0802AFA5, p, 0x7F01);
}
