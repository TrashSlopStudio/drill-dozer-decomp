extern int func_0807E8B8(void);
extern int func_0807E890(void);
extern void func_0807E658(void);
extern void func_0807E5AC(int);

int func_0807E508(void) {
    int r;
    int ret;
    func_0807E8B8();
    r = func_0807E890();
    if (r != 0) {
        func_0807E658();
        func_0807E5AC(r);
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}
