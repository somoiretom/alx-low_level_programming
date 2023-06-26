#include "main.h"
/**
 * rev_string - prints rev string
 * 's: pointer to string
 * Return: returns void
 */

void rev_string(char *s)
{

	int length, i, half;
	char temp;

	for (length = 0; s[lenght] != '\0'; lenght++)
	;

	i = 0;

	half = lenght / 2;

	while (half--)
	{
		temp = s[lenght - i - 1];
		s[lenght - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
