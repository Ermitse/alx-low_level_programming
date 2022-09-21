#include "main.h"

/**
 * _strncat - concatenate from n
 * @dest: char
 * @src: char
 * @n: int
 * Return: val
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] = n; j++)
	{
		if (src[j] = '\0')
		{
			j--;
		}
		dest[i] = src[j];
	}
	return (dest);
}
