#include "function_pointers.h"
#define NULL 0
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function format for printing
 *
 * Return: nothing if f is null
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
