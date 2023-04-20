#include "3-calc.h"

/**
 * op_add - adds a + b
 *
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a - b
 *
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a * b
 *
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a / b
 *
 * @a: first int
 * @b: second int
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calc a % b
 *
 * @a: first int
 * @b: second int
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
