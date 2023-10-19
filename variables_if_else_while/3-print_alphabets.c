#include <stdio.h>
/**
*main - This funtion Prints the alphabet
*Return: Always 0.
*/
int main(void)
{
int i = 65;
while (i < 123)
{
putchar(i);
if (i == 90)
i = 97;
if (i == 122)
putchar('\n');
i++;
}
return (0);
}
