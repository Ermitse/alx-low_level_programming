#include "main.h"
#include<stdlib.h>
/**
 * create_array - array of char
 * @size: int
 * @c: char
 * Return: ret val
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');

	s = malloc(sizeof(*s) * size);
	if (s == 0)
	{
		return ('\0');
	}
	else
	{
	while (i < size)
	{
	*(s + i) = c;
	i++;
	}

	return (s);
	}
}
