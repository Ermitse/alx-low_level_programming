#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x, y, a, b;

	for (x = 8; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	for (a = 0; y <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if (((a + b) > (x + y) && a >= x) || x < a)

	{
	putchar(x + '0');
	putchar(y + '0');
	putchar(' ');
	putchar(a + '0');
	putchar(b + '0');

	}
	}
	}
	}
	}
	return (0);
}

