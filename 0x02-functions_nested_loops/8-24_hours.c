#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: no return
 *
 */
void jack_bauer(void)
{

	int m, n;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
