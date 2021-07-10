#include "holberton.h"

/**
 * print_alphabet - prints out the alphabet
 * main - print the alphabet in lowercase followed by a new line
 * Return: 0 if Successful
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
}
