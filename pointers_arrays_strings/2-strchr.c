#include "main.h"
/**
*_strchr - Search for a char in a string.
*
*@s: String to search.
*@c: Char to check.
*
*Return: S specified char.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}
