#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and initializes with char
 * @size: size of array
 * @c: initializing character
 *
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
size_t i;
char *ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL || size < 1)
{
return (NULL);
}
for (i = 0; i < size; ++i)
{
ptr[i] = c;
}
return (ptr);
}
