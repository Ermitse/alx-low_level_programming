#include "main.h"
#include<string.h>

/**
 * print_rev - entry
 * @s: char
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	i = strlen(s);
	for (n = s[i] - 1; n <= 0; n--)
	{
		_putchar(s[n]);
	}
}
