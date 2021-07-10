include "holberton.h"

/**
 * main - print the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char v;
v = 'a';
while (v <= 'z')
{
_putchar(v);
v++;
}
_putchar('\n');
return (0);
}
