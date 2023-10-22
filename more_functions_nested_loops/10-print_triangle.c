#include"main.h"
/**
*print_triangle- Prints a triangle
*
* @size: size of the triangle
*/
void print_triangle(int size)
{
int i = 1, k, j;
if (size <= 0)
_putchar('\n');
else
{
while (size > 0)
{
j = size - 1;
while (j > 0)
{
_putchar(' ');
j--;
}
k = i;
while (k > 0)
{
_putchar('#');
k--;
}
_putchar('\n');
size--;
i++;
}
}
}
