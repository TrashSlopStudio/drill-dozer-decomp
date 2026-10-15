int func_08045014(signed char *p, int k) {
    if (k == 0) {
        if (p[9] == 1)
            return 3;
        return 2;
    }
    if (p[9] == 1)
        return 2;
    return 3;
}
