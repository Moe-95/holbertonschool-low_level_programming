#include "main.h"
/**
*print_diagonal - Print a diagonal line.
*@n: number of slashes
*/
void print_diagonal(int n)
{
int i = 0, j;
if (n <= 0)
_putchar('\n');
else
{
while (n > 0)
{
j = i;
while (j > 0)
{
_putchar(' ');
j--;
}
_putchar('\\');
_putchar('\n');
n--;
i++;
}
}
}
