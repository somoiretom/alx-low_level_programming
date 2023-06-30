#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string pointer
 * @src: string source
 * @n: bytes to copy
 * Return: returns results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
