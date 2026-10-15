extern void func_080B318C(void);
extern int func_08000960(int);
extern unsigned char *func_0800098C(void);
int func_080B3400(int a, int b) {
    if (func_08000960((int)func_080B318C) != 0) {
        if (func_0800098C()[0x30] == b) {
            return 1;
        }
    }
    return 0;
}
