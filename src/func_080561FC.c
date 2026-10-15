extern int func_080305C0(int);
extern int func_080560D8(void);
int func_080561FC(int a) {
    int r = func_080305C0(*(int *)(a + 12));
    if (func_080560D8() == a) {
        return r;
    }
    return 0;
}
