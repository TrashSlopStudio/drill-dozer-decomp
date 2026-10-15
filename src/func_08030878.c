extern void func_08005814(int, int);
extern void func_08021AC4(int, int, int);

void func_08030878(int a, int *b) {
    func_08005814(*(int *)(a + 684), b[7]);
    func_08021AC4(a, 1, b[7]);
}
