#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: string argument
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
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

int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
if (length == 0)
{
return (1);
}
return (pal_helper(s, 0, length - 1));
}
