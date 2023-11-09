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
while (str[i] != '\0')
{
i++;
}
a = malloc(sizeof(char) * i);
i = 0;
while (str[i] != '\0')
{
if (str[i] == NULL)
return (NULL);
a[i] = str[i];
i++;
}
return (a);
}
