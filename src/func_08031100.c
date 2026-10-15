extern int func_08031078(int);
int func_08031100(int a) {
    if (func_08031078(a) == 1) {
        return *(int *)(a + 512);
    }
    return 189;
}
