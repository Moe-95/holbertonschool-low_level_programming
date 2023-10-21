#include "main.h"
/**
* print_last_digit - Checks the last digit of a number.
*@c: number to be checked.
*
*Return: last digit of c.
*/
int print_last_digit(int c)
{
if (c < 0)
c = c * -1;
int a = c % 10;
_putchar(a + '0');
return (a);
}
