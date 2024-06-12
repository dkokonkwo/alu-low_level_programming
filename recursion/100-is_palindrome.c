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

/**
 * pal_helper - helper fxn to check for palindrome
 * @s: string to check
 * @start: initial char
 * @end: final char
 *
 * Return: 0 or 1
 */

int pal_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (pal_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string argument
 *
 * Return: 0 or 1
 */

int is_palindrome(char *S)
{
int length = _strlen(s);
if (length == 0)
{
return (1);
}
return (pal_helper(s, 0, length - 1));
}
