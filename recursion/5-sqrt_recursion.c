#include "main.h"
/**
 * _sqrt_help - helper function to find square root
 * @n: num to find square root of 
 * @i: number to test as square root
 *
 * Return: i or -1 if none exists
 */

int _sqrt_help(int n, int i)
{
if ((i * i) > n)
{
return (-1);
}
if ((i * i) == n)
{
return (i);
}
return (_sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of num
 * @n: num to find square root of
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_help(n, 0));
}
