#include "main.h"
#include<string.h>

/**
 * print_rev - entry
 * @s: char
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	while (n--)
		_putchar(s[n]);
	_putchar('\n');
}
