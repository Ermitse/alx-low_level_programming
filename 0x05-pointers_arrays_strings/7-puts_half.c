#include "main.h"
#include<string.h>

/**
 * puts_halfputs_half - entry
 * @str: char
 * Return: void
 */

void puts_half(char *str)
{
	int j, k;

	j = strlen(str);
	for (k = j / 2; k <= j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
