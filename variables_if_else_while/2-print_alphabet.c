#include <stdio.h>
/**
*main - This funtion Prints the alphabet
*Return: Always 0.
*/
int main(void)
{
for (int i = 97 ; i < 123 ; i++)
{
putchar(i);
if (i == 122)
putchar('\n');
}
return (0);
}
