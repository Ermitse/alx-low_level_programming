#include "main.h"
#include<string.h>
/**
 * puts2 - entry
 * str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
