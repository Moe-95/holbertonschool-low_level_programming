#include "main.h"
/**
*reverse_array - Reverse an array elements.
*
*@a: Pointer to Array a.
*@n: Size of Array a.
*/
void reverse_array(int *a, int n)
{
int i = n, q = 0, temp;
while (q < (i / 2))
{
temp = a[q];
a[q] = a[(i - 1) - q];
a[(i - 1) - q] = temp;
}
}
