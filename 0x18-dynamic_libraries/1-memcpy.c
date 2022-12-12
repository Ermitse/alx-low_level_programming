#include "main.h"

/**
 * _memcpy - copies val from mem
 * @dest: dest for cpy
 * @src: mem plc
 * @n: int
 * Return: returns val
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
