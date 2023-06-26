#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointerto be checked
 * Return: returns int i
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
