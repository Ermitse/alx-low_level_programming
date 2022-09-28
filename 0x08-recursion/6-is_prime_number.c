#include "main.h"
/**
 *
 */
int _decider(int n, int pr)
{
	if (n % pr = 0)
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
int is_prime_number(int n);
{
	int pr = 2;

	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	return (_decider(n, pr));
}
