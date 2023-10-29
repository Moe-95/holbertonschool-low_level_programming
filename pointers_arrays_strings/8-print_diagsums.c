#include<stdio.h>
#include "main.h"
/**
*print_diagsums - Calculate the sum of diagonals.
*
*@a: Pointer to the array.
*@size: Size of the aray.
*
*/
void print_diagsums(int *a, int size)
{
int i = 0, sum = 0, sizer;
sizer = size * size;
while (i < sizer)
{
if (i % (size + 1) == 0)
sum += a[i];
i++;
}
printf("%d, ", sum);
sum = 0;
i = 0;
while (i < sizer)
{
if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
sum += a[i];
i++;
}
printf("%d\n", sum);
}
