#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
 * _memset - set memory
 * @c: char mal
 * @b: set
 * @n: size
 * Return: ret val
 */
char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = b;
	}
	return (c);
}

/**
 * _calloc - calloc arr
 * @nmemb: set mem
 * @size: int size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == 0)
		return (NULL);
	_memset(m, 0, (nmemb * size));
	return (m);
}
