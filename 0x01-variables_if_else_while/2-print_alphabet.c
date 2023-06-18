#include <stdio.h>
/**
 * main - main block of codes
 * Return: returns integer 0
 */

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);

		alphabets++;
	}

	putchar('\n');
	return (0);
}

