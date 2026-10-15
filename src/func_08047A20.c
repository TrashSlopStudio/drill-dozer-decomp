extern int func_0801C49C(int);

void func_08047A20(int a) {
    unsigned char *p = (unsigned char *)a + 118;
    if (*p != 15) {
        if (func_0801C49C(a) == 1) {
            *p = 15;
        }
    }
}
