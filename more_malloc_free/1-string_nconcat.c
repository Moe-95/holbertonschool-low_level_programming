#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - concatenate string with n bytes of the other.
*
*@s1: 1st String.
*@s2: 2nd String.
*@n: number of bytes.
*
*Return: Address a.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, p = 0;
char *a;
while (s1[i] != '\0')
i++;
p = i + n;
a = malloc(sizeof(char) * p);
if (a == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
a[i] = s1[i];
i++;
}
while (s2[j] != '\0' && j < n)
{
a[i] = s2[j];
i++;
j++;
}
return (a);
}
