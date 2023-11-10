#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
*str_concat - concatinate a string.
*
*@s1: String 1.
*@s2: String 2.
*
*Return: Array a.
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, q = 0, l = 0;
char *a;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
q = i + j;
a = malloc((sizeof(char) * q) +1);
if (a == 0)
return (NULL);
l = i;
j = 0;
i = 0;
while (s1[i] != '\0')
{
if (a == NULL)
return (NULL);
a[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
if (a == NULL)
return (NULL);
a[l] = s2[j];
j++;
l++;
}
return (a);
}
