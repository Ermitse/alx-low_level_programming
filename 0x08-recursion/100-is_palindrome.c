#include "main.h"
#include<string.h>
/**
 * _strlen_recursion - length
 * @s: char pointer
 * Return: val
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
	return (0);
	}
	return (1 + _strlen_recurzion(++s));
}
/**
 * p - palidrome
 * @s: char poin
 * @l: int
 * Return: val
 */
int p(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (p(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: val
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}
