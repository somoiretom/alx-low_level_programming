#include <stdio.h>

/**
 * main - main block of code
 *
 * Return: returns integer 0
 */

int main(void)
{
	char s = 'a';
	while (s <= 'z')
	{
		putchar(s);
		s++;
	}

	s = 'A';
	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}

