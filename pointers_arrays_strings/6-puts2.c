#include "main.h"
/**
*puts2 - Prints other character of a String.
*
*@str: Pointer to str.
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i + 1]);
i++;
}
_putchar('\n');
}
