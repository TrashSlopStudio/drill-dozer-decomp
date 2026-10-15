extern void func_08019DC8(unsigned int, unsigned int, unsigned int);
extern void func_080B351C(unsigned char *, unsigned int, unsigned int);
void func_080B3898(unsigned char *a) {
    func_08019DC8(0x20000, 0, 0);
    func_080B351C(a, *(unsigned int *)(a + 0x3A8), 0);
}
