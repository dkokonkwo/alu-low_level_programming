#include "main.h"
/**
 * print_sign - check if number is +ve, -ve or zero
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
