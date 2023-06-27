#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - main code that prints password
 *
 * Return: returns int 0
 */

int main(void)
{
	int n = 2772, i = 0, j, rd;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (n > 126)
	{
		rd = rand() % 126;
		password[i] = rd;
		n -= rd;
		i++;
	}
	if (n > 0)
	{
		password[i] = n;
	}
	else
	{
		i--;
	}


	for (j = 0; j <= i; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}	
