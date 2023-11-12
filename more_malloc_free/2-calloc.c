#include <stdio.h>
0;276;0c#include <stdlib.h>
#include "main.h"
/**
*_calloc - allocate a memory.
*@nmemb: type.
*@size: size.
*
*Return: allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *a;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
while (i < (nmemb * size))
{
a[i] = 0;
i++;
}
return (a);
}
