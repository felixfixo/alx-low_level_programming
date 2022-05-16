#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first in
 * @b: second int
 * Return: difference of b from a
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: first int
 * @b: second int
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of a divided by b
 * @a: first int
 * @b: second int
 * Return: remainder of division of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
