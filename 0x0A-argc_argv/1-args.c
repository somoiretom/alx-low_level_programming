#include <stdio.h>
#include "main.h"

/**
 * main - print number of arg
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: int 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
