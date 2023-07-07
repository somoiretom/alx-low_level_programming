#include "main.h"

/**
 * factorials - factorial of a number
 * @n: number to return the fac from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
