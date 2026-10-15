extern void func_080067CC(void *, void *);
extern void func_08005560(void *);
void func_080C2408(int a, int b) {
    char *p = (char *)b;
    char *q = *(char **)(p + 12);
    *(unsigned short *)(p + 8) = *(unsigned short *)(q + 20);
    *(unsigned short *)(p + 10) = *(unsigned short *)(q + 22);
    func_080067CC(q, p + 16);
    func_08005560(*(char **)(p + 12));
}
