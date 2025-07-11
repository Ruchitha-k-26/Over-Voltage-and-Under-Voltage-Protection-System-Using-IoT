#include "relay.h"
#include "mcc_generated_files/mcc.h"

void RELAY_Toggle(void)
{
    RELAY_SetHigh();
    DELAY_milliseconds(1000);
    RELAY_SetLow();
}
