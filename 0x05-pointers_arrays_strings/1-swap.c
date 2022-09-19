#include "main.h"

/**
 * swap_int - entry point
 * @a: int pointer
 * @b: int pointer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = a;
	a = b;
	b = swap;
}
