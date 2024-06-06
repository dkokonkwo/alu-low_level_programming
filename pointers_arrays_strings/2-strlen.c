#include "main.h"
/**
 * _strlen - calculates string length
 * @s: string argument
 * Return: length of string
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
