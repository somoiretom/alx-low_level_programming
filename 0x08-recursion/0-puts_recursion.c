#include "main.h"

/**
 * *_puts_recursion - prints a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s == '\n');
		return;
	}
	_putchar(*S);
	_puts_recursion(s + 1);
}