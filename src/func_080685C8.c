typedef unsigned short u16;
typedef short s16;
extern u16 *func_0800098C(int a);
void func_080685C8(int a, u16 b, u16 c) {
    u16 *p = func_0800098C(a);
    int x = (s16)b;
    p[8] = x + p[8];
    x = (s16)c;
    p[9] = x + p[9];
}
