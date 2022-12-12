#include<ctype.h>
#include "main.h"
/**
 * _islower - checks lower case
 * @c: integer input
 * Return: 1 or 0
 *
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
