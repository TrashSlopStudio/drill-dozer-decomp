extern int func_08011B74(int a);
extern void func_08029E54(int a);
void func_08017E74(int a) {
    if (func_08011B74(a) == 0) {
        func_08029E54(*(unsigned short *)(a + 1004));
    }
}
