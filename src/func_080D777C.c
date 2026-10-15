extern void func_080305C0(int a);
extern int func_080560D8(void);
extern void func_0801BFE4(int a, int b, int c);
int func_080D777C(int a) {
    func_080305C0(*(int *)(a + 12));
    if (func_080560D8() == 0) {
        func_0801BFE4(a, a + 133, 0);
    }
    return 0;
}
