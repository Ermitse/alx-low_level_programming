#include "main.h"

/**
 * print_to_98 - print nms
 *@n: input
 * Return: ret
 *
 */
void print_to_98(int n)
{
	int i;

	if(n < 98)
	{
	for (i = n; i <= 98; i++)
	}
	else if (n > 98)
	{
	for (i = n; i >=98; i--)
	}
	else
	{
	i = n;
	}
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	
}
