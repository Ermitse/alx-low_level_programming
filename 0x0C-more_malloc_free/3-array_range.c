#include "main.h"
#include <stdlib.h>
/**
 * array_range - rnage
 * @min: int
 * @max: int
 * Return: ret val
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == 0)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		m[i] = min++;
	return (m);
}
