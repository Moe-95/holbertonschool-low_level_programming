#include "main.h"
/**
*_memcpy - Copy n bytes of a memory.
*
*@dest: memory copy to.
*@src: memory to copy from.
*@n: Number of bytes.
*
*Return: Coppied String dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
