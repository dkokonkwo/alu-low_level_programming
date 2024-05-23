#include "main.h"
/**
 * print_alphabet_x10 - prints function ten times
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}

void print_alphabet_x10(void)
{
int a = 0;
while (a < 11)
{
print_alphabet();
a++;
}
}
