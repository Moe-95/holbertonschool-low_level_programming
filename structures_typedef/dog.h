#ifndef DOG_H
#define DOG_H
/**
*struct dog -dog data.
*
*@name: dog name.
*@owner: dog owner.
*@age: dog age.
*Description: Define data of a variable of type dog.
*/
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
