#include "main.h"
/**
* print_last_digit - Checks the last digit of a number.
*@c: number to be checked.
*
*Return: last digit of c.
*/
int print_last_digit(int c)
{
int a = c % 10;
_putchar(a + '0');
return (a);
}
