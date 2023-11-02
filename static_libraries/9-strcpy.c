#include "main.h"
/**
*_strcpy - copy a String.
*
*@dest: Return string.
*@src: Pointer to string.
*Return: dest String.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0, a = 0;
while (src[i] != '\0')
{
i++;
}
while (a <= i)
{
dest[a] = src[a];
a++;
}
return (dest);
}
