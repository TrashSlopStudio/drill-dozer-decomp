extern int func_0807E618(int);
int func_080A71C4(int a, int b) {
    int r = func_0807E618(*(int *)(b + 60));
    if (r == 1) {
        *(int *)(b + 48) = r;
        *(int *)b = 4;
    }
    return 0;
}
