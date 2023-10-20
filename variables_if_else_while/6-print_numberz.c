#include<stdio.h>
/**
*main - This funtion uses putchar to prints numbers.
*
*Return: ALways 0.
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
if (i == 9)
putchar('\n');
i++;
}
return (0);
}
