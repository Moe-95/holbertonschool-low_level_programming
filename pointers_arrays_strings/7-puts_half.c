#include "main.h"
/**
*puts_half - Prints half a String.
*
*@str: Pointer to string.
*/
void puts_half(char *str)
{
int i = 0, a;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
a = ((i + 1) / 2);
else
a = i / 2;
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
