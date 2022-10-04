#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - alloc
 * @width: 1d
 * @height: 2d
 * Return: ret val
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **m;

	if (width < 1 || height < 1)
		return (NULL);

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);
			if (m[i] == NULL)
			{
				for (; i >= 0; i--)
				{
					free(m[i]);
					return (NULL);
				}
			}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	return (m);
}
