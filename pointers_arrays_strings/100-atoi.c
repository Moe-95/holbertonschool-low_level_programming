#include "main.h"
/**
*_atoi- Get numbers from a String.
*
*@s: String pointed.
*Return: Signed number.
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0, dig = 0, result = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = sign * (-1);
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
dig = 1;
num = num * 10 + (s[i] - '0');
i++;
}
if (dig == 1)
break;
i++;
}
result = (num *sign);
return (result);
}
