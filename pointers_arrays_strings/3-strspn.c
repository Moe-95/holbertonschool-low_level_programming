#include "main.h"
/**
*_strspn - Returns the number of bytes in s which consist of bytes from accept.
*
*@s: Pointer to string s.
*@accept: Pointer to string .
*Return: Counter c.
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, c = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
c++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (c);
}
