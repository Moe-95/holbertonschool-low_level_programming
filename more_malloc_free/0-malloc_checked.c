#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - Return the memory address.
*
*@b: int of the memory address.
*
*Return: Address a.
*/
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
