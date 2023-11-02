#include "main.h"
/**
*_puts - Prints a String.
*
*@str: Pointer to str.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
