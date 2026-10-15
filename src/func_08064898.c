extern void func_0806715C(int);
extern void func_08067170(int);
extern void func_08064B10(int);

int func_08064898(int a) {
    int *p = *(int **)(a + 0x4c);
    if (p[2] != 0) {
        func_0806715C(p[1]);
    } else {
        func_08067170(p[1]);
    }
    func_08064B10(a);
    return 0;
}
