extern unsigned char *gUnk_0203603C;
extern void func_08000FB8(int, int);
void func_08063AC8(void) {
    if (gUnk_0203603C != 0) {
        if (gUnk_0203603C[2] & 2) {
            func_08000FB8(0, 0x2000);
        }
    }
}
