#include "main.h"

/**
 * reverse_array - rev array
 * @a: int pointer
 * @n: number of int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (i = 0; i = n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
