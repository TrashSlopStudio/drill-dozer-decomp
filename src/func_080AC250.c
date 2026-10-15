extern int func_080ABF18(int);
extern void func_080ABF00(int, int);

int func_080AC250(int *a) {
    if (func_080ABF18(a[6]) == 1) {
        func_080ABF00(a[6], 0);
        *a = 8;
    }
    return 0;
}
