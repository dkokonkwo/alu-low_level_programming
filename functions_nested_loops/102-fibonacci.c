#include <stdio.h>

/**
 * fibo - prints forst 50 num im fibo sequence
 */

void fibo(void)
{
long int sum = 1;
long int prev = 0;
long int tmp;
int count = 0;
while (count < 50)
{
tmp = sum;
sum += prev;
if (count < 49)
{
printf("%ld, ", sum);
}
else
{
printf("%ld\n", sum);
}
prev = tmp;
count++;
}
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
