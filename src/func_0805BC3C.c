#include "types.h"

extern struct {
    u32 pad;
    u32 t[1][3][4];
} gUnk_0831F7D0;

u32 func_0805BC3C(int a, int b, int c) { return gUnk_0831F7D0.t[a][c][b]; }
