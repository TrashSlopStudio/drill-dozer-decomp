extern void func_08005560(int);
extern void func_080066B8(int, int);
void func_080964D8(int a) {
    int *p = (int *)a;
    if (p[12] != 0) {
        func_08005560(p[12]);
        func_080066B8(*(unsigned short *)(a + 46), 1);
    }
}
