extern void func_080066B8(int, int);
extern void func_08005560(int);
void func_08021850(int a) {
    int *p = (int *)(a + 692);
    unsigned short *q = (unsigned short *)*p;
    func_080066B8(q[8], q[9]);
    func_08005560((int)q);
    *p = 0;
}
