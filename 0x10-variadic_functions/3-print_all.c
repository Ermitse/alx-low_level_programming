#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all types
 * @*: all types
 * @format: types
 *
 */
void print_all(const char * const format, ...)
{
	va_list(vl);
	unsigned int i = 0, j, k = 0;
	char *c;
	const char t_arg[] = "cifs";

	va_start(vl, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vl, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(vl, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(vl, double)), k = 1;
				break;
			case 's':
				c = va_arg(vl, char *), k = 1;
				if (!c)
				{
					printf("(nil)");
					break;
				}
				printf("%s", c);
				break;
			} i++;

		}
	printf("\n"), va_end(vl);
}
