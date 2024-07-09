#include "function_pointers.h"
#define NULL 0

/**
 * array_iterator - executes fxn on each element in array
 * @array: array to iterate through
 * @size: size of array
 * @action: fxn parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
