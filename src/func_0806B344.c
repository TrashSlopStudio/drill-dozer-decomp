extern int *func_08002DD0(void);
extern void func_08029E54(int);
extern void func_0806B524(int, int, int);
void func_0806B344(int a, int b) {
    if (*(unsigned short *)((char *)func_08002DD0() + 6) & 3) {
        func_08029E54(0x128);
        func_0806B524(a, b, 3);
    }
}
