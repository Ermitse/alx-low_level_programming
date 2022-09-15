#include "main.h"

/**
 * print_triangle - trio
 * @size: int
 * Return: re
 */

void print_triangle(int size)
{
	int i = 1, k;

	while (i <= k && k > 0)
	{
		k = 0;
		while (k < size - 1)
		{
			_putchar(' ');
			k++;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
