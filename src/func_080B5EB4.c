extern int func_0800B4D0(int, unsigned short);
extern int func_0800BE5C(int);

int func_080B5EB4(int a, unsigned short b) {
    if (func_0800B4D0(a, b) != 0 || func_0800BE5C(a) != 0)
        return 1;
    return 0;
}
