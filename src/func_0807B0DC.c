extern int *func_08001728(int);
extern int *gUnk_0203610C;
void func_0807B0DC(void) {
    int **q = &gUnk_0203610C;
    *q = func_08001728(88);
    **q = 255;
}
