#include "main.h"
#include<string.h>

/**
 * puts_half - entry
 * @str: char
 * Return: void
 */

void puts_half(char *str)
{
	int j, k, i;

	j = strlen(str);
	k = j / 2;
	if (k % 2 == 0)
	{
	for (i = k + 1; i < j; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
		for (i = (j - 1) / 2; i <= j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
