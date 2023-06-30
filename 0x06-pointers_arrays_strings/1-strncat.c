#include "main.h"

/**
 * _strncat - concatenates n bytes from a string
 * @dest: pointer to the string
 * @src: string source
 * @n: no of bytes of a str
 * Return: returns a pointer 
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
