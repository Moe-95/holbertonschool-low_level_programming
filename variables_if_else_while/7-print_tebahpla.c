#include<stdio.h>
/**
*main - This function prints reversal alphabet.
*
*Return: Always 0.
*/
int main(void)
{
int i = 122;
while (i > 96)
{
putchar(i);
if (i == 97)
putchar('\n');
i--;
}
return (0);
}
