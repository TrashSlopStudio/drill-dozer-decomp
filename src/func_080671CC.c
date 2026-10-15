extern int *func_08066D60(void);
extern void func_08063B64(int, int, int);
extern void func_08063C80(int);

void func_080671CC(void) {
    int *p = func_08066D60();
    if (p != 0 && p[3] == 0) {
        p[3] = 1;
        func_08063B64(0xE0, 0x28, 2);
        func_08063C80(0);
    }
}
