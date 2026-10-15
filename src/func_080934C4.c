extern void func_080067CC(int, int);
extern void func_08093A04(int, int);

void func_080934C4(int a) {
    int b = a + 0x7c;
    if (*(int *)(b + 12) == 1) {
        func_080067CC(*(int *)(b + 0x24), a + 0xa4);
        func_08093A04(a, b);
    }
}
