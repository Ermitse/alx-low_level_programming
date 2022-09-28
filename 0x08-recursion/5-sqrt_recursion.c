#include "main.h"

/**
 * _sqrt - find sqrt
 *
 * @i: int
 * @n: int
 * Return: ret val
 */
int _sqrt(int i, int n)
{

	if (n < 0)
		return (-1);

	else if (i * i == n)
		return (i);
	else if (i * i < n)
	{
		return (_sqrt(i + 1, n));
	}
	return (-1);
}
/**
 * _sqrt_recursion - sqrt of n
 * @n: int
 * Return: ret val
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_sqrt(i, n));
}
