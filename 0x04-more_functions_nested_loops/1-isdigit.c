#include "main.h"

/**
 * _isdigit - Entry point
 * @c: integer in
 * Return: rer val
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
