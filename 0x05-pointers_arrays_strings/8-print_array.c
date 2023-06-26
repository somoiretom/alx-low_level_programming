#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: int array pointer
 * @n: integer
 * Description: Numbers must be separated by , and space
 * The numbers should be displayed in the same order as they are stored in the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
