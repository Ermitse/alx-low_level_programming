#include "main.h"

/**
 * more_numbers - prints mor num
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	char j, c;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
