#include "main.h"
/**
*more_numbers - Print from 0 to 14 10times.
*
*/
void more_numbers(void)
{
int i = 0, j = 0;
while (j < 10)
{
i = 0;
while (i < 15)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
j++;
}
}
