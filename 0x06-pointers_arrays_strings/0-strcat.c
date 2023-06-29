#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination to a pointer
 * @src: pointer source
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i = -1, a;
	for (a = 0; dest[a] != '\0'; a++)
	;

	do {
		i++;
		dest[a] = src[i];
		a++;
	} while (src[i] != '\0');

	return (dest);
}
