#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: char pointer
 * Return: ret val
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(s[i]);

		_puts_recursion(s + 1);
	}
}
