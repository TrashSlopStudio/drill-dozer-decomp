extern void func_08005814(int, void *);
extern char gUnk_082C3CC4[];
void func_0805007C(int a) {
    int *p;
    int i;
    p = (int *)(a + 12);
    i = 1;
    do {
        func_08005814(*p++, gUnk_082C3CC4);
    } while (--i >= 0);
}
