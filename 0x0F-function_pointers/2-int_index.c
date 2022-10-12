#include "function_pointers.h"
/**
 * int_index - search for int
 * @array: array to search
 * @size: size of array
 * @cmp: point to comparing func
 * Return: returns index of first int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
