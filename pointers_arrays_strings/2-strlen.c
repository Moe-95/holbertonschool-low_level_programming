#include "main.h"
/**
*_strlen - Calculate the length of a string.
*
*@s: Pointer to s.
*Return: Counter.
*/
int _strlen(char *s)
{
int count = 0;
for ( ; *s != '\0' ; *s++)
{
count++;
}
return (count);
}
