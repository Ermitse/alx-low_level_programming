#include<ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: integer input
 *
 * Return: 1 or 0
 *
 */

int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	for (i = 'A'; i <= 'Z'; i++)
	{
	if (i == c)
	{
	return (1);
	}
	}
	return (0);
}
