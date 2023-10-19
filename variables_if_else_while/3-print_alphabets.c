#include <stdio.h>
/**
*main - This funtion Prints the alphabet
*Return: Always 0.
*/
int main(void)
{
int i = 97;
while (i < 123)
{
putchar(i);
i++;
}
int a = 65;
while (a < 91)
{
putchar(a);
if (a == 90)
putchar('\n');
a++;
}
return (0);
}
