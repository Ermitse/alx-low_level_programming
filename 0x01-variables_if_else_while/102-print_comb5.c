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

	for (x = 48; x <= 57; x++)
	{
	for (y = 48; y <= 57; y++)
	{
	for (a = 48; y <= 57; a++)
	{
	for (b = 48; b <= 57; b++)
	{
	if (((a + b) > (x + y) && a >= x) || x < a)

	{
	putchar(x);
	putchar(y);
	putchar(' ');
	putchar(a);
	putchar(b);

	if (x + y + a + b == 227 && x == 57)
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
