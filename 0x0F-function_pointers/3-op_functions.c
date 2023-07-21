#include "3-calc.h"

/**
 * op_add - calc the sum of 2 int
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
 * op_sub - calculates the difference of two integers
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a -b);
}

/**
 * op_mul - calculates the product of two integers
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
 * op_div - calculates the division of two integers
 * @a: first int
 * @b:  second int
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a/b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: reminder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
