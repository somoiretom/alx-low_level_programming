#include <stdio.h>

/**
 * main - main block of code
 * Return: returns int zero
 */

int main(void)
{
	char a[] = "_putchar";

	int m;

	for(m=1; m < 9; m++)
	{

		_putchar(a[m]);
	}

	_putchar('\n');
	return (0);
}

