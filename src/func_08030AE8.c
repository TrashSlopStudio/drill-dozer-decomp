extern void func_08005814(int, int);
extern void func_08021AE0(int, int, int);

void func_08030AE8(int a, int *b) {
    func_08005814(*(int *)(a + 688), b[8]);
    func_08021AE0(a, 1, b[8]);
}
