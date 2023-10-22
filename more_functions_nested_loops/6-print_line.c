#include "main.h"
/**
*print_line - Print a straight line.
*@n: number of dashes
*/
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
