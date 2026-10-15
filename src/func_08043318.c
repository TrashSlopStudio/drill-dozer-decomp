extern void func_080EAE18(void *);
extern void func_080EB7D4(void *, int);
extern int func_0800C1E8(void *);
extern void func_08084868(void *, int);

void func_08043318(void *p) {
    func_080EAE18(p);
    func_080EB7D4(p, 0x65);
    if (func_0800C1E8(p) == 0xa4) {
        func_08084868(p, 1);
    }
}
