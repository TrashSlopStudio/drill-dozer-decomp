extern int func_0800B400(int a);
extern int func_0800B490(int a, int b);

int func_080622B8(int a) {
    if (func_0800B490(a, func_0800B400(a)) == 1) {
        return 1;
    }
    return 0;
}
