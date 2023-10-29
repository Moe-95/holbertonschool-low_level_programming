#include "main.h"
/**
*string_toupper - Convert String to upperCase.
*
*@c: Pointer to string.
*Return: UpperCase char.
*/
char *string_toupper(char *c)
{
int i = 0;
while (c[i] != '\0')
{
if (c[i]  <= 'z' && c[i] >= 'a')
c[i] = (c[i] - 32);
i++;
}
return (c);
}
