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
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int len = _strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
