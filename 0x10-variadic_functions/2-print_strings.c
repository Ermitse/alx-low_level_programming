#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string
 * @n: number of str
 * @separator: char sep
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ps;
	char *c;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ps, char *);
		{
		if (c)
			printf("%s", c);
		else
			printf("nil");
		}
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
