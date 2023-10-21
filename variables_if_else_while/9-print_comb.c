#include<stdio.h>
/**
*main- This funtion prints the numbers less then 10.
*
*Return: Always 0.
*/
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
if (i == 57)
putchar('\n');
i++;
}
return (0);
}
