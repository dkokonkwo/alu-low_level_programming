#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * fibo - prints first 98 num in fibonacci sequence
 */

void fibo(void)
{
uint64_t sum = 1;
uint64_t prev = 0;
uint64_t tmp;
int count = 0;
while (count < 98)
{
tmp = sum;
sum += prev;
if (count < 97)
{
printf("%" PRIu64 ", ", sum);
}
else
{
printf("%" PRIu64 "\n", sum);
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
