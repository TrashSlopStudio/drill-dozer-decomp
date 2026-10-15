extern int func_080A7848(int a, int b);

int func_080A7610(int a) {
    int *p = (int *)(a + 124);
    int r = func_080A7848(a, (int)p);
    if (r != 0) {
        p[9] = r;
        p[10] = 1;
        p[8] = 1;
    }
    return 0;
}
