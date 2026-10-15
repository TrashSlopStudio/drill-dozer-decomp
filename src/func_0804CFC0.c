extern void func_080067CC(int, int);
extern void func_0804D114(int, int);
void func_0804CFC0(int a, int *b) {
    func_080067CC(*b, (int)b + 8);
    func_0804D114(a, (int)b);
}
