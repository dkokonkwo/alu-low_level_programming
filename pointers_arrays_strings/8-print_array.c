#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements in array
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
if (n < 1)
{
printf("\n");
}
else
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
}
