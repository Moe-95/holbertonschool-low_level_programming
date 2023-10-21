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
int a = j *i;
if (j == 0)
{
_putchar('0' + a);
}
else
{
_putchar(',');
_putchar(' ');
if (a < 10)
{
_putchar(' ');
_putchar('0' + a);
}
else
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
}
j++;
}
_putchar('\n');
i++;
}
}
