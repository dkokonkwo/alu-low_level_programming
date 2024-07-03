#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints times table up to 15
 * @n: table size
 */

void print_times_table(int n)
{
int i;
int j;
if (n > 15 || n < 0)
{
return;
}
if (n == 0)
{
printf("%d\n", n);
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == n)
{
printf("%3d\n", (i * j));
}
else if (j == 0)
{
printf("%d, ", (i * j));
}
else
{
printf("%3d, ", (i * j));
}
}
}
}
