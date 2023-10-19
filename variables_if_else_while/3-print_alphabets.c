#include <stdio.h>
/**
*main - This funtion Prints the alphabet
*Return: Always 0.
*/
int main(void)
{
int a = 65;
int i = 97;
while (i < 123)
{
putchar(i);
i++;
}
while (a < 91)
{
putchar(a);
if (a == 90)
putchar('\n');
a++;
}
return (0);
}
