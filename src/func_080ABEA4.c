extern int gUnk_08414440[];
extern void func_08005BBC(int a, int b, int c);
void func_080ABEA4(int *s) {
    int v = gUnk_08414440[s[1]];
    s[8] = v;
    func_08005BBC(s[5], v, 0);
}
