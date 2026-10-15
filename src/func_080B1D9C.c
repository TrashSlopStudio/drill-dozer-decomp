typedef unsigned short u16;
struct S {
    int a;
    u16 x;
    u16 y;
    u16 *src;
    int pad[1];
};
extern void func_080067CC(u16 *, int *);
extern void func_0807E98C(u16 *);

void func_080B1D9C(int a, struct S *s) {
    s->x = s->src[10];
    s->y = s->src[11];
    func_080067CC(s->src, s->pad);
    func_0807E98C(s->src);
}
