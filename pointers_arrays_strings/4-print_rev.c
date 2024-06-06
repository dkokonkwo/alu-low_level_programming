#include "main.h"
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
_putchar(str[i]);
}
_putchar('\n');
}
