extern void func_08005560(int);
extern void func_080066B8(int, int);

void func_08079120(int a) {
    if (*(int *)(a + 132) != 0) {
        func_08005560(*(int *)(a + 132));
        func_080066B8(*(unsigned short *)(a + 128), 8);
    }
}
