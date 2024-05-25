#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @c: The character to check
 *
 * Return: On success last digit
 */

int print_last_digit(int c)
{
int last;
last = c % 10;
if (c >= 0)
{
_putchar (last + '0');
return (last);
}
else
{
last = -last;
_putchar (last + '0');
return (last);
}
}
