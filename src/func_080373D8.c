extern int func_08017800(void);
extern void func_08017734(int *);

int func_080373D8(int *a) {
    if (func_08017800() != 0) {
        func_08017734(a);
    }
    a[18] = 2;
    return 1;
}
