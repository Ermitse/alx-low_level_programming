#include "main.h"
#include<unistd.h>
/**
 * _puts - entry
 * @str: char
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
