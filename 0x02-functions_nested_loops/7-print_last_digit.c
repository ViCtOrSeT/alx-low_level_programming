#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @v: variable to check
 * Return: the value of the last digit
 */
int print_last_digit(int v)
{
int k;
if (v < 0)
v = -v;
k = v % 10;
if (k < 0)
k = -k;
_putchar(k + '0');
return (a);
}
