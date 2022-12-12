#include"main.h"

/**
 * _memset - fills mem with constant val
 * @s: char pointer
 * @b: charval
 * @n: int val
 * Return: return val
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
