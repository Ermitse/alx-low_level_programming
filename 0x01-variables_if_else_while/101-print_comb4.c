#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
	for (n = 0; n <= 9; n++)
	{
	for (o = 0; o <= 9; o++)
	{

	if (m < n && n < o)
	{
	putchar(m + '0');
	putchar(n + '0');
	putchar(o + 'o');

	if (m != 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
