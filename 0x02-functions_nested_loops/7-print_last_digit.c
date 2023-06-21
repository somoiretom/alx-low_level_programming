#include "main.h"

/**
 * print_last_digit - outputs the last digit
 * @l: extract the last digit
 *
 * Return: returns n
 */

int print_last_digit(int l)
{
int n;
if (l < 0)
l = -l;
n = l % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}


