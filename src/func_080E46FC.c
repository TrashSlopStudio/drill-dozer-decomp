extern void func_08005560(void *);
extern void func_080066B8(unsigned short, int);
void func_080E46FC(char *p) {
    if (*(void **)(p + 4) != 0) {
        func_08005560(*(void **)(p + 4));
        func_080066B8(*(unsigned short *)(p + 2), 256);
        *(int *)(p + 4) = 0;
    }
}
