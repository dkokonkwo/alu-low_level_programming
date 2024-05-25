#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
int a;
int b;
int hour;
hour = 0;
while (hour < 23)
{
for (int i = 0; i < 60; i++)
{
if (hour < 10)
{
_putchar('0');
_putchar(hour + '0');
}
if (hour > 9)
{
a = i / 10;
b = i % 10;
_putchar(a + '0');
_putchar(b + '0');
}
_putchar(':');
if (i < 10)
{
_putchar('0');
_putchar(i + '0');
}
if (i >= 10)
{
a = i / 10;
b = i % 10;
_putchar(a + '0');
_putchar(b + '0');
}
_putchar('\n');
}
}
