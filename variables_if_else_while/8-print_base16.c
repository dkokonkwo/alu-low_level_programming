#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char hex[] = "0123456789abcdef";

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}

	putchar('\n');

	return (0);
}