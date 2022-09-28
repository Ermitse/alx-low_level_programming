#include "main.h"
/**
 * _decider - decide
 * @n: int
 * @pr: int
 * Return: val
 */
int _decider(int n, int pr)
{
	if (pr == n - 1)
		return (1);
	else if (n % pr == 0)
		return (0);
	else if (n % pr != 0)
		return (_decider(n, pr + 1));
	return (0);
}
/**
 * is_prime_number - prrime
 * @n: int
 * Return: ret val
 */
int is_prime_number(int n)
{
	int pr = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_decider(n, pr));
}
