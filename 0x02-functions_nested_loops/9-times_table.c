#include "holberton.h"

/**
 * times_table - prints 9 time tables starting from 0
 */
void times_table(void)
{
int v, k, o;
for (v = 0; v < 10; v++)
{
for (k = 0; k < 10; v++)
{
o = k * v;
if (k == 0)
{
_putchar(o + '0');
}
if (o < 10 && k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(o + '0');
}
else if (o >= 10)
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
