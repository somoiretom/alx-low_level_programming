#include "main.h"

/**
 * print_alphabet_x10 - code prototype for ALX projects
 *
 * Return: returns in o
 */

void print_alphabet_x10(void)
{
	int j = 0;
	while (j < 10)
	{
		char a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		j++;
	}
}
