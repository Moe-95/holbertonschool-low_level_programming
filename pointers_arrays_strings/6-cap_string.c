#include "main.h"
/**
*cap_string - Capitalize a String.
*
*@c: Pointer to a string.
*Return: c captalized String.
*/
char *cap_string(char *c)
{
int i = 0, j = 0;
char let[13] = {',', '.', ';', '!',
'?', '"', '(', ')', '{', '}', '\t', '\n', ' '};
if (c[0] >= 'a' && c[0] <= 'z')
c[0] = c[0] - 32;
while (j < 13)
{
i = 0;
while (c[i] != '\0')
{
if (c[i] == let[j])
{
if (c[i + 1] <= 'z' && c[i + 1] >= 'a')
c[i + 1] = (c[i + 1] - 32);
}
i++;
}
j++;
}
return (c);
}
