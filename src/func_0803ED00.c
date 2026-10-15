extern void func_080067CC(unsigned char *, int);
extern void func_0803ECE8(int);

void func_0803ED00(int a) {
    *(int *)(a + 16) = (*(unsigned char **)(a + 68))[1];
    func_080067CC(*(unsigned char **)(a + 68), a + 60);
    func_0803ECE8(*(int *)(a + 68));
}
