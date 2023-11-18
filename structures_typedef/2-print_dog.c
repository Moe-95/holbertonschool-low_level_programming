#include"dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - Prints the elements of the variable dog.
*
*@d: Variable dog.
*/
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}
