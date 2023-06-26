#include "main.h"

/**
 * *_strcopy - copies the string pointed by src
 * @dest: char
 * @src: char
 * Description: copy string
 * to the buffer pointed by 'dest'
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
