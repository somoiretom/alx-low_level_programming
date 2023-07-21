#include "variadic_functions.h"


/**
 * print_numbers - prints no given us parameters
 * @Separator: string to be printed btwn no
 * @n: no of int passed to the func
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int u;
	va_list list;

	va_start(list, n);

	for (u = 0; u < n; u++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && u == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
