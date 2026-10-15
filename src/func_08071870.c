extern void func_080715AC(int);
extern void func_080715B8(int);

int func_08071870(int *p) {
    p[6] += 32;
    if (p[6] > 768)
        func_080715AC((int)p);
    func_080715B8((int)p);
    return 0;
}
