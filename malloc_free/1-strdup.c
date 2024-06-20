#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string to new memory
 * @str: string argument
 *
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
size_t len = strlen(str)
char *ptr = (char *) malloc(len + 1);
if (ptr == NULL)
{
return (NULL);
}
strcpy(ptr, str);
return (ptr);
}
