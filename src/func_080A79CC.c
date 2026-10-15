extern void func_08011B94(int, int);

int func_080A79CC(int a, int *b) {
    int z = 0;
    b[3] = z;
    b[4] = z;
    b[5] = z;
    b[0] = 2;
    func_08011B94(*(int *)(a + 36), 87);
    return 1;
}
