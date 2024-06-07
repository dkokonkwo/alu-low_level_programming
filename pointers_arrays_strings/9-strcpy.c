#include "main.h"
/**
 * _strcpy - copy string to an array
 * @dest: destination array
 * @src: source array
 * Return: pointer
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
