#include <unistd.h>

/**
 * _putchar - writes C to stdout
 * @c: Character to print
 *
 * Return: 1 on success
 * -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
