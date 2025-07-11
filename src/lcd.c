#include "lcd.h"
#include "mcc_generated_files/mcc.h"

void LCD_Init(void)
{
    LCD_WriteByte(LCD_COMMAND_REGISTER, 0x38);
    LCD_WriteByte(LCD_COMMAND_REGISTER, 0x0E);
    LCD_WriteByte(LCD_COMMAND_REGISTER, 0x06);
}

void LCD_Display(char *line1)
{
    LCD_Clear();
    LCD_DataDisp(LCD_FIRST_ROW, line1);
}
