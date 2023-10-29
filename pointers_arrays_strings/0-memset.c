#include "main.h"
/**
*_memset - Fill n bytes of a string.
*
*@s: Pointer to String.
*@b: Byte to be filled with.
*@n: Number of filling.
*
*Return: Filled String s.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
