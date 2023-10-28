#include "main.h"
/**
*_atoi- Get numbers from a String.
*
*@s: String pointed.
*Return: Signed number.
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
num = num * (-1);
else if (s[i] == '+')
num = num * (+1);
if (s[i] >= '0' && s[i] <= '9')
num = num * 10 + (s[i] - '0');
i++;
}
return (num *sign);
}
