#include "main.h"
#include <stdio.h>

/**
 * natural - prints the sum of multiples of int below a max
 */

void natural(void)
{
int max = 1024;
int final = 0;
int count = 0;
while (count < max)
{
if ((count % 3) == 0 || (count % 5) == 0)
{
final += count;
}
count++;
}
printf("%d\n", final);
}
