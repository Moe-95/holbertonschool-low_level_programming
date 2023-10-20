#include<stdio.h>
/**
*main - This function prints the alphabet without e and q.
*
*Return: Always 0.
*/
int main(void)
{
int i = 97;
while (i < 123)
{
if (i == 101 || i == 113)
i++;
putchar(i);
if (i == 122)
putchar('\n');
i++;
}
}
