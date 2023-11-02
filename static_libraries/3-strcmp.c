#include "main.h"
/**
*_strcmp - Compare 2 strings.
*
*@s1: Pointer to s1.
*@s2: Pointer to s2.
*Return: difference between strs cmp.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, cmp = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
cmp += (s1[i] - s2[i]);
break;
}
i++;
}
return (cmp);
}
