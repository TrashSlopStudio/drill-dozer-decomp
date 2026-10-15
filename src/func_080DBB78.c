#include "types.h"

typedef void (*Fn)(u32, u8 *);
extern Fn gUnk_08489270[];

void func_080DBB78(u32 a, u8 *b) { gUnk_08489270[b[4]](a, b); }
