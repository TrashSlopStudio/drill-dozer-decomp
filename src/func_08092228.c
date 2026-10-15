extern int func_08092244(void);
int func_08092228(int a) {
    int r = func_08092244();
    if (r == 1) {
        *(unsigned char *)(a + 118) = r;
    }
    return 1;
}
