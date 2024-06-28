#include "dog.h"
#define NULL 0

/**
 *init_dog - initializes a variable dog
 * @d: dog pointer to structure
 * @name: name element
 * @age: age element
 * @owner: owner element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
