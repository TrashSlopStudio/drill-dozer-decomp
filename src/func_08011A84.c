extern int *func_08011720(int);

void func_08011A84(int a, int *p) {
    if (p != 0) {
        int *q = func_08011720(a);
        int x = p[0];
        int y = p[1];
        q[10] = x;
        q[11] = y;
    }
}
