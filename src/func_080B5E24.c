extern int func_080F8700(int a, int b);
void func_080B5E24(int *p, int b, int c) {
    p[3] = func_080F8700(b - p[0], c);
    p[2] = b;
    *(short *)(p + 4) = c;
}
