int func_0800B778(int p) {
    int n = 0;
    unsigned v = *(unsigned *)(p + 0xa0);
    int one = 1;
    int i;
    for (i = 31; i >= 0; i--) {
        if (v & one)
            n++;
        v >>= 1;
    }
    return n;
}
