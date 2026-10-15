extern void func_0801B064(int);
void func_080F2F44(int a, int b) {
    func_0801B064(*(int *)(b + 8));
    func_0801B064(*(int *)(b + 12));
    *(int *)(b + 8) = 0;
    *(int *)(b + 12) = 0;
}
