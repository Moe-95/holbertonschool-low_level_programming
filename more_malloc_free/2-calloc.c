#include <stdio.h>
#include <stdlib.h>
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
int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
unsigned int *a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
while (i < (nmemb * size))
{
a[i] = 0;
i++;
}
return (a);
}
