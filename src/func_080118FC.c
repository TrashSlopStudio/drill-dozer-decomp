extern int func_08011950(int *);

int func_080118FC(int *a) {
    if (func_08011950(a) == 1) {
        if (a[21] == 2) {
            return 4;
        }
        if (a[21] == 3) {
            return 5;
        }
    }
    return a[21];
}
