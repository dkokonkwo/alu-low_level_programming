#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struture for a dog with three elements
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t new_dog;
void free_dog(dog_t *d);

#endif /* DOG_H */
