extern void func_080066B8(int, int);
extern void func_08005560(int);
void func_0801F0C8(int a) {
    if (a != 0) {
        func_080066B8(*(unsigned short *)(a + 16), 16);
        func_08005560(a);
    }
}
