#include "types.h"

extern u32 func_08000960(u32);
extern void func_08071454(void);

u32 func_08071568(void) { return func_08000960((u32)func_08071454) == 0; }
