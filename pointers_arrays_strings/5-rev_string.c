#include "main.h"
/**
 * rev_string - reverses a string
 * @s - string argument
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


void rev_string(char *s)

