#include "main.h"
/**
 * _islower - check if a char is lowercase
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
