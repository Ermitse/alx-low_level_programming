#include "main.h"
#include<stdlib.h>
/**
 * _calloc
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
	for (int i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (m);
}
