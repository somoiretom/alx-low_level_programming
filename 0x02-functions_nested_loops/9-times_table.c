#include "main"

/**
 * times_table - outputs table 9 times from 0
 *
 */

void times_table(void)
{
int m, n, o;
for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
o = n * m;
if (n == 0)
{
_putchar(o + '0');
}
if (o < 10 && n != 0)
{
_putchar(',');
_putchar(' ');
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
}
}
_putchar('\n');
}
}
