#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{

	for (m = 0; m <= 9; m++)
	{
	if (n != m && m != n)
	{
	putchar(n + '0');
	putchar(m + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
