#include <stdio.h>
/**
 * main - print three digits
 *
 * Return: 0 (success)
 */

int main(void)
{
int a;
int b;
int c;
a = 0;
b = 1;
c = 2;
while (a < 8)
{
while (b <= 8)
{
while (c <= 9)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a < 7)
{
putchar(',');
putchar(' ');
}
c++;
}
b++;
c = b + 1;
}
a++;
b = a + 1;
c = b + 1;
}
putchar('\n');
return (0);
}
