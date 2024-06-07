#include "main.h"
/**
 * _strlen - gets length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
char *ptr = s;
while (*ptr)
{
++ptr;
}
return (ptr - s);
}

/**
 * puts_half - prints last half of string
 * @str: string argument
 */
void puts_half(char *str)
{
int len = _strlen(str);
int start;
if ((len % 2) == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2;
}
while (start <= (len -1))
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
