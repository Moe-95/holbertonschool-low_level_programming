#include <stdio.h>
#include <stdlib.h>
#include"dog.h"
/**
*free_dog - free dog.
*
*@d: dog to free.
*/
void free_dog(dog_t *d)
{
if (d == 0)
return;
free(d->name);
free(d->owner);
free(d);
}
