#include "types.h"

extern int func_08011720(int);
extern int func_08031138(int);

int func_08031148(int a, int b) {
    int p = *(int *)(func_08011720(a) + 0x204);
    return *(int *)(func_08031138(p) + 24) & b;
}
