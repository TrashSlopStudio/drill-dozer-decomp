extern void func_08005560(int);
extern void func_0804869C(int);

void func_080954D8(int a, int *p) {
    int *q = p;
    int i;
    for (i = 7; i >= 0; i--) {
        func_08005560(*q++);
    }
    func_08005560(p[8]);
    func_0804869C(((unsigned short *)p)[18]);
}
