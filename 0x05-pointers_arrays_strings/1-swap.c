#include "main.h"
/**
 * swap_int - swap variable values
 * @a: 1 pointer
 * @b: 2 pointer
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
