extern int func_080624F4(int a, int b);
extern void func_080DF3F8(int a, int b, int c);

int func_080DF170(int a, int b) {
    if (func_080624F4(a, b) != 0) {
        func_080DF3F8(a, b, 2);
    }
    return 1;
}
