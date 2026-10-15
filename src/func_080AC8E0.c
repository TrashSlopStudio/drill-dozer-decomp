extern int func_080213D4(int);
extern void func_080ABF00(int, int);

int func_080AC8E0(int *p) {
    if ((unsigned char)func_080213D4(p[10]) == 1) {
        p[0] = 19;
        func_080ABF00(p[11], 9);
    }
    return 0;
}
