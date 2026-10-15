typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_08011720(u32);
extern void func_08030114(u32, u32 *);

void func_08030190(u32 a, u16 b, u16 c) {
    u32 buf;
    a = func_08011720(a);
    buf = b | (c << 16);
    func_08030114(a, &buf);
}
