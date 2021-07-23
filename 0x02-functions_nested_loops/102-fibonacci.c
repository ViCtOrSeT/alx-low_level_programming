#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2 followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
long int v, k, v1, next;
k = 1;
v1 = 2;
for (v = 1; v <= 50; ++v)
{
if (k != 20365011074)
{
printf("%1d, ", k);
}
else
{
printf("%1d\n", v);
}
next = k + v1;
k = v1;
v1 = next;
}
return (0);
}
