extern void func_0801C194(int);
void func_080A6644(int a) {
    signed char *p;
    func_0801C194(a);
    p = (signed char *)(a + 84);
    if (*p == 2) {
        *p = 3;
    } else {
        *p = 2;
    }
}
