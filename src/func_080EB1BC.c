extern void func_080066B8(int, int);
void func_080EB1BC(int a) {
    unsigned short *p = (unsigned short *)(a + 124);
    int v;
    func_080066B8(p[0], p[1]);
    v = 1024;
    *p = v;
}
