extern int func_080016E8(unsigned int);
extern void func_080F8710(unsigned int *, int);
int func_080BA6EC(unsigned int *a) {
    int r = func_080016E8(*a >> 8);
    if (r != 0) {
        func_080F8710(a, r);
    }
    return r;
}
