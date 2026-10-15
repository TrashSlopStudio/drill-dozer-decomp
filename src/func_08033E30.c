#include "types.h"

extern u8 gUnk_082AD900[];
extern u8 gUnk_082AD904[];
extern u8 gUnk_082AD918[];
u32 func_08033608(void *, u32, void *, void *, u32);

u32 func_08033E30(void) {
    return func_08033608(gUnk_082AD900, 0, gUnk_082AD918, gUnk_082AD904, 16);
}
