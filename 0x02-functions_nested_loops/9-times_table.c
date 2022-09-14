#include "main.h"

/**
 * times_table - multiples
 * r: rows c: columns d: digits of numb
 * :Return: 0
 *
 */
void times_table(void)
{
	int c = 0, r = 0, d;

	for (r = 0; r<=9; r++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			d = r * c;
			if (d < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d % 10 + '0');
			}
			else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
		}
			_putchar(10);
	}
}
