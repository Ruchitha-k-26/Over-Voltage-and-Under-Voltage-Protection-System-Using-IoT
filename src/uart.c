#include "uart.h"
#include "mcc_generated_files/mcc.h"

void UART1_Init(void)
{
    // UART already initialized in SYSTEM_Initialize
}

void UART1PrintString(char *str)
{
    while (*str)
    {
        UART1PutChar(*str++);
    }
}

void UART1PutChar(char ch)
{
    TX1REG = ch;
    while (!TX1STAbits.TRMT);
}
