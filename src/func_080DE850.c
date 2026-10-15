extern int *func_08001728(int);
extern void func_0800089C(void *, int *, int);
extern void func_080DE874(void);
void func_080DE850(int a) {
    int *p = func_08001728(8);
    *p = a;
    func_0800089C(func_080DE874, p, 0x1801);
}
