#include "types.h"

u32 func_08064F68(u32 *p) {
    if (p[6] == 1) {
        if (p[7] == 1) {
            p[6] = 0;
            p[2] = p[3];
            return 1;
        }
        if (p[7] == 2) {
            p[6] = 0;
            p[2] = p[3];
            return 0;
        }
        return 1;
    }
    return 0;
}
