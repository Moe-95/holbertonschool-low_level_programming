#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize a variable of typr struct dog.
*
*@d: dog passed.
*@name: dog name.
*@age: dog age.
*@owner: dog owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
