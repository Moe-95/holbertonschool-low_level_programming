#include "main.h"
/**
*_strpbrk -locates the first occurrence in s of the bytes in accept
*
*@s: Pointer to string s.
*@accept: Pointer to string .
*Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
char *p;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
