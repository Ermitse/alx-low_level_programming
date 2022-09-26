#include "main.h"

/**
 * _strpbrk - check str
 * @s: pointer str
 * @accept: holds val
 * Return: ret val
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
