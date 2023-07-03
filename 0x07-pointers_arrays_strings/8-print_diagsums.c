#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: square matrix
 * @size: matrix size
 */
void print_diagsums(int*a, int size)
{
	int x;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum += a[(size * x) + x];
		sum1 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
