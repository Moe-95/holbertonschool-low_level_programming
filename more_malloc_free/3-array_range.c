#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*array_range - Create an array from min to max.
*
*@min: 1st nb of array.
*@max: Last nb of array.
*
*/
int *array_range(int min, int max)
{
int i = 0, j = min;
int *a = malloc(sizeof(int) * (max - min + 1));
if (a == NULL)
return (NULL);
if (min > max)
return (NULL);
while (i <= (max - min))
{
a[i] = j;
j++;
i++;
}
return (a);
}
