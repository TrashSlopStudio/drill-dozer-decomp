extern unsigned short gUnk_03000010[];
extern unsigned func_08000F88(int);
extern void func_08000F28(int, unsigned);
void func_08000D3C(void) {
    unsigned x = func_08000F88(0);
    x &= 0xF0F8;
    func_08000F28(0, x | gUnk_03000010[8]);
}
