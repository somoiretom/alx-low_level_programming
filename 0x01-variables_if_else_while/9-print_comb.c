#include <stdio.h>
/**
 * main - main code block
 * Return: returns zero int data type
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(48 + digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
