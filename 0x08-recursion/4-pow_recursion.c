#include "main.h"

/**
 * pow_recursion - square of n
 * @x: int
 * @y: int
 * Return: ret val
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
