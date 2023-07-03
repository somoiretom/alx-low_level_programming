#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination mem area
 * @src: mem area to copy from
 * @n: no of bytes to copy
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
