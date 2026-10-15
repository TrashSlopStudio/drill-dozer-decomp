extern void func_08008820(int, int, int);

void func_0800E2A8(char *p, short *q) {
    *(unsigned short *)(p + 26) = *(unsigned short *)(p + 22);
    *(unsigned short *)(p + 28) = *(unsigned short *)(p + 24);
    *(unsigned short *)(p + 22) = q[0];
    *(unsigned short *)(p + 24) = q[1];
    func_08008820(*(int *)(p + 52), q[0], q[1]);
}
