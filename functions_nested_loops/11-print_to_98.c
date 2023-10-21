#include "main.h"
#include<stdio.h>
/**
*print_to_98 - Display numbers till 98.
*@n: number to be checked.
*
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 99)
{
if (n < 98)
{
printf("%d, ", n);
}
else
printf("%d", n);
n++;
}
}
else
{
while (n > 97)
{
if (n > 98)
{
printf("%d, ", n);
}
else
printf("%d", n);
n--;
}
}
}
