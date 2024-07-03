#include <stdio.h>

/**
 * fibo - prints even num in fibo sequence under 4mil
 */

void fibo(void)
{
long int sum = 1;
long int prev = 0;
long int tmp;
long int even = 0;
while (sum < 4000000)
{
tmp = sum;
sum += prev;
if ((sum % 2) == 0)
{
even += sum;
}
prev = tmp;
}
printf("%ld\n", even);
}

/**
 * main - check function
 *
 * Return: Always 0
 */

int main(void)
{
fibo();
return (0);
}
