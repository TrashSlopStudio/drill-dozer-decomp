#include "types.h"

extern u32 func_08000960(u32);
extern void func_080BA400(void);

u32 func_080BA3E4(void) { return func_08000960((u32)func_080BA400) == 0; }
