#include "main.h"

/**
 * reverse_array - rev array
 * @a: int pointer
 * @n: number of int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i 1] - a[i];
	}
}

