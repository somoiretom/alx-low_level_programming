#include "main.h"
/**
 * _islower - checks for a lowercase character in this case c
 * @c: letter c is being tested
 * Returns: returns zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
