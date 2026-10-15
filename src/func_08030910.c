#include "types.h"

extern void func_08005BBC(int, int, int);
extern void func_08021AC4(int, int, int);

void func_08030910(u8 *a, u8 *b) {
    func_08005BBC(*(int *)(a + 0x2AC), *(int *)(b + 28), 0);
    func_08021AC4((int)a, 2, *(int *)(b + 28));
}
