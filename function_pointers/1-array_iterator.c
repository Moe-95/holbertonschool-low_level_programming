#include <stdio.h>
/**
* array_iterator - performs an action on a whole array
*
* @array: array to act on
* @size: size of array
* @action: function to execute on array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
if (action != NULL && array != NULL)
while (i < size)
{
action(array[i]);
i++;
}
}
