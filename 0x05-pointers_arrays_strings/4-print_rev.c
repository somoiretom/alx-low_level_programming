#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: pointer to the string
 * Return: returns 0
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');

}
