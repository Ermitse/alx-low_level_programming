#include "main.h"

/**
 * _sqrt_recursion - sqrroot of n
 * @n: int
 * Return: ret val
 */
int _sqrt(int i, int n)
{

	if (n == 1 && n == 0)
		return (n);
	else if (n < 0)
		return (-1):

	else if (i * i = n)
		return (i);
	else if (i * i < n)
		return (_sqrt(i + 1, n));
}
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_sqrt(i, n));
}
