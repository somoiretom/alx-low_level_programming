#include "main.h"
/**
 * _puts - outputs a string
 * @str: pointer to print
 *
 * Return: return void
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
