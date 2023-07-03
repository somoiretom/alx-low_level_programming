#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a sub string
 * @haystack: string to search
 * @needle: substring to look
 *
 * Return: pointer or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
