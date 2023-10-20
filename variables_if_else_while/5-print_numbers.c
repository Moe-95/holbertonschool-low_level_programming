#include<stdio.h>
/**
*main - This function prints from 0 to 9.
*
*Return: Always 0.
*/
int main(void)
{
int i = 0;
while (i < 10)
{
printf("%d", i);
if (i == 9)
printf("\n");
i++;
}
return (0);
}
