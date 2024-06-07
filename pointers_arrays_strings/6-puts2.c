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
 * puts2 - prints every other char
 * @str: string argument
 */
void puts2(char *str)
{
int len = _strlen(str);
int i = 0;
while (i <= len)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
