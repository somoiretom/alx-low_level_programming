#include "main.h"

/**
 * cap_string - Capitalizes string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int x, y;

	char special[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
	
	  	for (y = 0; y < 13; y++)
		{
			if (s[x] == special[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
