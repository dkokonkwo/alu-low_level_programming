#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to two-dimensional int array
 * @width: input number of columns in 2-D array
 *
 * @height: input number of rows in 2-D array
 *
 * Return: pointer to newly allocated memory with 2-D int array
 */

int **alloc_grid(int width, int height)
{
int **array;
int rows, columns;
int i;

if (width <= 0 || height <= 0)
return (NULL);
array = (int **) malloc(height * sizeof(int *));
if (array == NULL)
{
return (NULL);
}
for (rows = 0; rows < height; rows++)
{
array[rows] = (int *) malloc(width * sizeof(int));
if (array[rows] == NULL)
{
for (i = 0; i < rows; i++)
{
free(array[i]);
}
free(array);
return (NULL);
}
}
for (rows = 0; rows < height; rows++)
{
for (columns = 0; columns < width; columns++)
{
array[rows][columns] = 0;
}
}
return (array);
}
