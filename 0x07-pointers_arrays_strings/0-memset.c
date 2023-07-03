#include "main.h"

/**
 * *_memset - fills memory with byte consatnt
 * @s: memory area to be filled
 * @b: char to copy
 * @n: no of times to cpy b
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
