#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk -  locates the first occurrence in the string s
 * @s: String to search
 * @accept: string 
 *
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);

}
