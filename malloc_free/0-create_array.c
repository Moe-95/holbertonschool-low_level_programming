#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
*create_array - create an array of size size.
*
*@c: Array char.
*@size: Array size.
*
*Return: Array a.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *a = malloc(sizeof(c) * size);
if (size <= 0)
return (NULL);
while (i < size)
{
a[i] = c;
i++;
}
return (a);
return (NULL);
}
