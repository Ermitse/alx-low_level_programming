#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a n b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: 2nd integer
 * Return: sub of a n b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - calculates the division of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: mul of a n b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the division of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: did of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: renainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
