#include "main.h"
/**
*_strncpy - Concatenate a String.
*
*@src: Pointer to str.
*@dest: Pointer to destination string.
*@n: Number of chars to concatenate.
*
*Return: Concatenated String.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
