extern void func_08005BBC(int, int, int);
extern void func_08021AE0(int, int, int);

void func_08030B88(int a, int *b) {
    func_08005BBC(*(int *)(a + 0x2B0), b[8], 0);
    func_08021AE0(a, 2, b[8]);
}
