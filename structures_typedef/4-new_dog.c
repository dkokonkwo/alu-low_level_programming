#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog structure variable
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
char *name_dog;
char *owner_dog;
dog_t *dog_dog = malloc(sizeof(dog_t));
if (dog_dog == NULL)
{
return (NULL);
}
for (i = 0; name[i]; i++)
	;
name_dog = malloc((i + 1) * sizeof(char));
if (name_dog == NULL)
{
return (NULL);
}
for (i = 0; name[i]; i++)
{
name_dog[i] = name[i];
}
name_dog[i] = '\0';
for (i = 0; owner[i]; i++)
	;
owner_dog = malloc((i + 1) * sizeof(char));
if (owner_dog == NULL)
{
free(dog_dog);
free(name_dog);
return (NULL);
}
for (i = 0; owner[i]; i++)
{
owner_dog[i] = owner[i];
}
owner_dog[i] = '\0';
dog_dog->name = name_dog;
dog_dog->age = age;
dog_dog->owner = owner_dog;
return (dog_dog);
}
