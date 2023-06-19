#include <stdio.h>

/**
 * main - main block of codes
 *
 * Return: returns 0 as an integer
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
