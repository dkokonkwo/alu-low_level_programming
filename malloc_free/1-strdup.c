#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
{
*dest++ = *src++;
}
*dest++ = '\0';
return (ptr);
}

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
 * _strdup - duplicates string to new memory
 * @str: string argument
 *
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
char *ptr = (char *) malloc(_strlen(str) + 1);
if (ptr == NULL)
{
return (NULL);
}
_strcpy(ptr, str);
return (ptr);
}
