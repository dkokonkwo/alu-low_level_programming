#include <stdio.h>

/**
 * fibo - prints even num in fibo sequence under 4mil
 */

void fibo(void)
{
long int sum = 1;
long int prev = 0;
long int tmp;
int count = 0;
while (sum < 3000000)
{
tmp = sum;
sum += prev;
if ((sum % 2) == 0)
{
printf("%ld, ", sum);
}
prev = tmp;
}
printf("%d\n", sum);
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
