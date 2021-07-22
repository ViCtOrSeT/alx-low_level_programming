#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: times table number
 */
void print_times_table(int n)
{
int v, k, o;
if (n >= 0 && n <= 15)
{
for (v = 0; v <= n; v++)
{
for (k = 0; k <= n; k++)
{
o = k * v;
if (k == 0)
{
_putchar(o + '0');
}
else if (o < 10 && k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(o + '0');
}
else if (o >= 10 && o < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
}
else if (o >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((o / 100) + '0');
_putchar(((o / 10) % 10) + '0');
_putchar((o % 10) + '0');
}
}
_putchar('\n');
}
}
}
