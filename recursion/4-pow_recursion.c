#include "main.h"
/**
 * _pow_recursion - calcutes x to the power of y
 * @x: base integer
 * @y: superscript or power
 *
 * Return: calculated value
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
