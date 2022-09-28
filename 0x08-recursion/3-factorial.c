#include "main.h"

/**
 * factorial - factorial of number
 * @n: int
 * Return: return val
 */
int factorial(int n)
{
	if (n == 0)
	return (1);

	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
