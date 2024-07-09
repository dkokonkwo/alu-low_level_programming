#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an int
 * @array: array of int
 * @size: no of elements in array
 * @cmp: function pointer that compares integers
 *
 * Return: first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
