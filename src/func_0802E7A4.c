extern void func_08011834(int a, int *b);
extern void func_0802E738(int a, int *b, int c);
void func_0802E7A4(int a, int b, int c) {
    int x;
    func_08011834(a, &x);
    func_0802E738(b, &x, c);
}
