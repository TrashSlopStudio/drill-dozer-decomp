extern void func_080F0A20(int, int);

int func_080F0CAC(int *p) {
    int v = *(int *)(p[22] + p[1] * 20 + 4);
    func_080F0A20(p[23], v);
    p[1]++;
    return 1;
}
