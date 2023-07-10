#include <stdio.h>
#include "main.h"

/**
 * main - program
 * @argc: number of arguments
 * @argv: array to argc
 *
 * Return:  int 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
