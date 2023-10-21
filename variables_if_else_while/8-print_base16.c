#include<stdio.h>
/**
*main- This funtion print the numbers of base 16.
*
*Return: Always 0.
*/
int main(void)
{
int i = 48;
while (i < 63)
{
if (i <= 57)
putchar(i);
if (i >= 57)
putchar(i + 40);
if (i == 62)
putchar('\n');
i++;
}
return (0);
}
