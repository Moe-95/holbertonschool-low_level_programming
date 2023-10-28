#include "main.h"
/**
*_strcat - Concatenate a String.
*
*@src: Pointer to str.
*@dest: Pointer to destination string.
*
*Return: Concatenated String.
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, k = 0, q = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
k = i + j;
while (i < k)
{
dest[i] = src[q];
i++;
q++;
}
return (dest);
}
