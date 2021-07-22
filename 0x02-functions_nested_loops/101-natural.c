#include <stdio.h>

/**
 * main - computes and print the sum of all the multiples
 * of 3 and 6 below 1024
 * Return: 0 if successful
 */
int main(void)
{
int sum, v;
for (v = 1023, sum = 0; v; v--)
if (!(v % 3) || !(v % 5))
sum += v;
printf("%d\n", sum);
return (0);
}
