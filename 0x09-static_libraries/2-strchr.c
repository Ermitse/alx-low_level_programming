#include "main.h"

/**
 * _strchr - check for string
 * @s: char pointer to string
 * @c: char val to check
 * Return: returns val or null
 */

char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
