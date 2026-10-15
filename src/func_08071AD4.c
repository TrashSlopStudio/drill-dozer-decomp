extern int func_08071A78(int);
extern unsigned char func_0800B490(int, int);
void func_08071AD4(int a) {
    int r = func_08071A78(a);
    do {
        *(unsigned char *)(r + 40) = func_0800B490(a, 11);
    } while (0);
}
