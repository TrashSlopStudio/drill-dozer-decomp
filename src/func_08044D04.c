#include "types.h"
extern u8 func_080118A8(void);
u32 func_08044D04(void) {
    switch (func_080118A8()) {
    case 0:
    case 1:
    case 25:
        return 1;
    }
    return 0;
}
