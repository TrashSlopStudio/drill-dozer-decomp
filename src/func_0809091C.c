extern void func_0801BF48(unsigned char *, int);
extern void func_08005560(int);
void func_0809091C(int a) {
    unsigned char *p = (unsigned char *)a + 124;
    func_0801BF48(p, *(int *)(p + 8));
    func_08005560(*(int *)(p + 8));
}
