#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: Char
 *
 * Return: 1 on success, 0 else
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
