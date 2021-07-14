#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int v, k;
v = 0;
while (v < 24)
{
k = 0;
while (k < 60)
{
_putchar((v / 10) + '0');
_putchar((v % 10) + '0');
_putchar(':');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar('\n');
k++;
}
v++;
}
}
