#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocater
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
