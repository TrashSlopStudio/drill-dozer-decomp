extern void func_08012C08(int, int, int, int);

void func_080701B4(int a) {
    int x;
    int y;
    func_08012C08(a + 60, a + 36, 10, 10);
    x = *(int *)(a + 60);
    y = *(int *)(a + 64);
    *(int *)(a + 52) = x;
    *(int *)(a + 56) = y;
    *(int *)(a + 44) = x;
    *(int *)(a + 48) = y;
}
