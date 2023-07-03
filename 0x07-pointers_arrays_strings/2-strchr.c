#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char
 *
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
