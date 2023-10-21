#include "main.h"
/**
*times_table - Display the times table.
*/
void times_table(void)
{
int i = 0, j = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
int a = i * j;
if (a > 9)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
else
_putchar(a + '0');
if (j < 9 && a <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (j < 9 && a > 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
