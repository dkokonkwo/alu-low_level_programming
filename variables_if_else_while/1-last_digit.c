#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - comment
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int last;

    srand(time(0));
	n = rand() - RAND_MAX / 2;
    last = n % 10;
    if (last > 5)
    {
    printf("Last digit of %d is %d and is greater than 5\n", n, last);
    }
    else if (last == 0)
    {
    printf("Last digit of %d is 0 and is 0\n", n);
    }
    else
    {
    printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
    }
	return (0);
}