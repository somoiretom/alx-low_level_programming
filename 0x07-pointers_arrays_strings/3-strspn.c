#include "main.h"

/**
 * *_strspn - gets length of a prefix sub string
 * @s: string to evaluate
 * @accept: list of characters to match s
 *
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, flag;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		flag = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (z);
		}
	}

	return (0);
}
