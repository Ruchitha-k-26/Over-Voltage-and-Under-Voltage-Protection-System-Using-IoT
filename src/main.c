#include "mcc_generated_files/mcc.h"
#include "lcd.h"
#include "uart.h"
#include "relay.h"

void main(void)
{
    SYSTEM_Initialize();
    LCD_Init();
    UART1_Init();

    while (1)
    {
        RELAY_Toggle();
        LCD_Display("Voltage Safe");
        UART1PrintString("Status: Normal\n");
        DELAY_milliseconds(5000);
    }
}
