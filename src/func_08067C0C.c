extern void func_080066B8(int, int);
extern void func_08005560(int);
void func_08067C0C(int *p) {
    int *q = (int *)*p;
    if (q != 0) {
        func_080066B8(((unsigned short *)q)[8], ((unsigned short *)q)[9]);
        func_08005560(*p);
        *p = 0;
    }
}
