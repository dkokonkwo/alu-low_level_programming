#include "main.h"
/**
 * print_alphabet - prints all alphabets
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

/**
 * print_alphabet_x10 - prints function ten times
 */
void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
print_alphabet();
a++;
}
}
