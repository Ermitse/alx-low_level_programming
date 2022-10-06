#include "main.h"
#include<stdlib.h>
/**
 * _realloc - allocates mem
 * @ptr: points
 * @old_size: old mem size
 * @new_size: new mem size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cpt, *fill;
	unsigned int i;
	void *mem;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	cpt = ptr;
	mem = malloc(sizeof(char) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = mem;
	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *cpt++;
	free(ptr);
	return (mem);
}

