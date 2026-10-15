extern void func_0800B254(int, int);
extern void func_080B06EC(int *);

int func_080B0D0C(int *a) {
    func_0800B254(a[0], *(unsigned short *)(a[1] + 4));
    func_080B06EC(a);
    return 0;
}
