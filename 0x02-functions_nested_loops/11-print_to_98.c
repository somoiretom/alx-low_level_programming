#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @a: number
 */

void print_to_98(int a)
{
int m, n;
if (a <= 98)
{
for (m= a; m <= 98; m++)
{
if (m != 98)
printf("%d, ", m);
else if (m == 98)
	printf("%d\n", m);
}
}
else if (a >= 98)
{
for (n = a; a >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else if (n == 98)
printf("%d\n", n);
}
}
}

