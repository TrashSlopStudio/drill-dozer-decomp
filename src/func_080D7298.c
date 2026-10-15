int func_080D7298(char *p) {
    int v = *(short *)(p + 0x56);
    int r = 0;
    if (v <= 40) {
        r = 1;
        if (v <= 30) {
            r = 2;
            if (v <= 20) {
                r = 4;
                if (v > 10)
                    r = 3;
            }
        }
    }
    return r;
}
