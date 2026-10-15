extern void func_0809157C(int, int);
void func_08091698(int *a, volatile int *b) {
    func_0809157C((int)a, (int)b);
    *(unsigned short *)(*b + 20) = a[4];
    *(unsigned short *)(*b + 22) = a[5];
}
