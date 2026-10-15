extern void func_08041930(int, int);
extern void func_0801AEF0(int, int);
void func_08041914(int a) {
    unsigned short *p = (unsigned short *)(a + 124);
    func_08041930(a, p[2]);
    func_0801AEF0(a, *(int *)(a + 124));
}
