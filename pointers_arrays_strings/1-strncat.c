#include "main.h"
/**
*_strncat - Concatenate a String.
*
*@src: Pointer to str.
*@dest: Pointer to destination string.
*@n: Number of chars to concatenate.
*
*Return: Concatenated String.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0, q = 0;
while (dest[i] != '\0')
{
i++;
}
k = i + n;
while (i < k && src[q] != '\0')
{
dest[i] = src[q];
i++;
q++;
}
return (dest);
}
