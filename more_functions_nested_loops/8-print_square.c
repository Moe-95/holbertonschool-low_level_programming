#include "main.h"
/**
*print_square - Print a square.
*@size: number of hashes
*/
void print_square(int size)
{
int i = n, j;
if (n <= 0)
_putchar('\n');
else
{
while (n > 0)
{
j = i;
while (j > 0)
{
_putchar('#');
j--;
}
_putchar('\n');
n--;
}
}
}
