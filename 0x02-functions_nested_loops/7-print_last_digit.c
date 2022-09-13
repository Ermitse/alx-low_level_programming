#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @l: last digit
 *
 * Return: 0 or 1
 *
 */
int print_last_digit(int l)
{
	int n;

	n = l % 10;
	if (l < 0)
	n = n * -1;

	_putchar(n + '0');
	return (n);
}
