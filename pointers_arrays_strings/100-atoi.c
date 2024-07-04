#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string argument
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
int final; 
int result = 0;
int sign = 1;
int digit;
while (*s && ((*s < '0') || (*s > '9')))
{
if (*s == '-')
{
sign *= -1;
}
s++;
}

while (*s && (*s >= '0') && (*s <= '9'))
{
digit = *s - '0';
if (result > (INT_MAX - digit) / 10)
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = result * 10 + digit;
s++;
}
final = result * sign;
return (final);
}
