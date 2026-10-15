extern void func_08019DC8(int, int, int);
extern void func_080B351C(int, int, int);
void func_080B3988(int a) {
    func_08019DC8(0x10000, 0, 0);
    func_080B351C(a, *(int *)(a + 0x3A8), 0);
}
