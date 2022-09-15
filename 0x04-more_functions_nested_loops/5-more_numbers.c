#include "main.h"

/**
 * more_numbers - prints mor num
 *
 */

void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		for (int j = 0; j <= 14; j++)
			_putchar(j + '0');
		i++;
	}
	_putchar('\n');
}
