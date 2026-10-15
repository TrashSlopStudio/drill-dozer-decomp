extern int func_0801CE10(void);
extern void func_08029658(void *, int);
int func_08029AA8(char *a, int b) {
    int z = 0;
    *(int *)(a + 0x4c) = z;
    if (func_0801CE10() == 1) {
        func_08029658(a, b);
        *(a + 0x76) = z;
    }
    return 0;
}
