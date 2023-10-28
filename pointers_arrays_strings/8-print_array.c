#include "main.h"
/**
*print_array - Prints an array.
*
*@a: Pointer to array.
*@n: Number of array elements.
*/
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
if (i == (n - 1))
printf("%d", a[i]);
else
printf("%d, ", a[i]);
}
}
