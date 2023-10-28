#include "main.h"
#include<stdio.h>
/**
*print_array - Prints an array.
*
*@a: Pointer to array.
*@n: Number of array elements.
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i == (n - 1))
printf("%d", a[i]);
else
printf("%d, ", a[i]);
i++;
}
}
