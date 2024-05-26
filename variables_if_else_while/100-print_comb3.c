#include <stdio.h>
/**
 * main - prints two digits combination
 *
 * Return: 0 (Success)
 */

int main(void)
{
int a;
int b;
a = 0;
b = 1;
while (a < 9)
{
while (b <= 9)
{
putchar(a + '0');
putchar(b + '0');
if (a < 8)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
b = a + 1;
}
putchar('\n');
return (0);
}
