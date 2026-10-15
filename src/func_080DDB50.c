extern void func_0801B064(int);

void func_080DDB50(int a, int b) {
    int *p;
    int i;
    p = (int *)(b + 12);
    i = 1;
    do {
        func_0801B064(*p++);
    } while (--i >= 0);
}
