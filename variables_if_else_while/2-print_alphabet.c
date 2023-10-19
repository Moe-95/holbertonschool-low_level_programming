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
if (i == 122)
putchar('\n');
i++;
}
return (0);
}
