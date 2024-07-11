#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - addition operation
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - miltiplication operation
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division operation
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
exit(100);
}

/**
 * op_mod - modulus operation
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
exit(100);
}
