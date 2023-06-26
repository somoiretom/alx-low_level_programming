#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string
 * Return: returns 0
 */

void puts_half(char *str)
{
	int length, m, n;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (n = length / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	} else if (length % 2)
	{
		for (m = (length - 1) / 2; m < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
