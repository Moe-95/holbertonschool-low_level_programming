#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
*_strdup - duplicate a string.
*
*@str: String to duplicate.
*
*Return: Array a.
*/
char *_strdup(char *str)
{
int i = 0;
char *a;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
a = malloc((sizeof(char) * i) + 1);
i = 0;
while (str[i] != '\0')
{
a[i] = str[i];
if (a == NULL)
return (NULL);
i++;
}
return (a);
}
