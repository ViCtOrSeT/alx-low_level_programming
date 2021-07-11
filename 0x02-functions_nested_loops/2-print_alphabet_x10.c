#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * main - prints 10 times the alphabet in lowercase and followed by a new line
 * Return: 0 if Sucessful
 */

void print_alphabet_x10(void)
{
char v;
v = 'a';
while (v <= 'z')
{
_putchar(v);
v++;
}
_putchar('\n')
}
