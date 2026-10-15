#include "types.h"

extern u16 func_08006738(void);
extern u16 func_08006744(void);

void func_08006B88(u16 *a, u16 *b) {
    *a += func_08006738();
    *b += func_08006744();
}
