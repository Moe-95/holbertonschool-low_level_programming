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
unsigned int *a = malloc(sizeof(nmemb) * size);
if (a == NULL)
return (NULL);
return (a);
}
