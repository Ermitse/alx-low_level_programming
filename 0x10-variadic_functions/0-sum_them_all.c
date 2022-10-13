#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sum of n numb3rs
 * @n: number of int 
 * Return: ret sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	else
	{
		va_start (ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg (ap, int);
		va_end (ap);
	}
	return (sum);
}
