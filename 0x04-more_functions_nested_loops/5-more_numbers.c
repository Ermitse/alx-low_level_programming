#include "main.h"

/**
 * more_numbers - prints mor num
 *
 */

void more_numbers(void)
{
	int i;
	char j;

	i = 0;
	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j > 9)
			{
			_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	i++
	}
}
