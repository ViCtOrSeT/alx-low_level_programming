#include <stdio.h>

/**
 * main - prints the sum of even-valued terms followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
long int i, v, k, sum;
v = 1;
k = 2;
for (i = 0, sum = 0; v < 4000000; i++)
{
if (!(v % 2))
sum += v;
k = v + k;
v = k - v;
}
printf("%ld\n", sum);
return (0);
}
