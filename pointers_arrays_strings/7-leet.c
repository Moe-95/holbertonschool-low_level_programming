#include "main.h"
/**
*leet - Encode a String.
*
*@c: Pointer to a string.
*Return: c leet String.
*/
char *leet(char *c)
{
int i = 0, j = 0;
char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
char let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
while (j < 10)
{
i = 0;
while (c[i] != '\0')
{
if (c[i] == let[j])
c[i] = num[j];
i++;
}
j++;
}
return (c);
}
