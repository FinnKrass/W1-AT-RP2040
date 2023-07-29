#include "w1rp.h"

void keyboard_pre_init_kb(void) {
  setPinOutput(GP29);
}

layer_state_t layer_state_set_kb(layer_state_t state) {
    if(IS_LAYER_ON_STATE(state, 1)) {
        writePinHigh(GP29);
    }
    else {
        writePinLow(GP29);
    }
return state;
}
