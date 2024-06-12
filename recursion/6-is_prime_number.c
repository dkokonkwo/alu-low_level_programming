#include "main.h"
/**
 * _prime_helper - helper function to find if num is prime
 * @n: number to check
 * @i: divisor
 */

int _prime_helper(int n, int i)
{
if ((n % i) == 0)
{
return (0);
}
if ((i == n) || (i > (n / 2)))
{
return (1);
}
return (_prime_helper(n, i + 1));
}

/**
 * is_prime_number - check if a num is prime or not
 * @n: num argument to check
 *
 * Return: 0 or -1
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_prime_helper(n, 2));
}
