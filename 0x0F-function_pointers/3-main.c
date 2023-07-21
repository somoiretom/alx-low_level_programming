#include "3-calc.h"

/**
 * main - program to perform operation
 * @argc: no. of arg
 * @argv: array of arg
 *
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char c;

	int (*func)(int int);

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/'|| c == '%') && arg2 == 0)
	{
		printf("error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
