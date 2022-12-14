#include "main.h"

/**
 * _strlen_recursion - length
 * @s: char pointer
 * Return: val
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * p - palidrome
 * @s: char poin
 * @l: int
 * @i: int
 * Return: val
 */
int p(char *s, int l, int i)
{
	if (i < l && s[i] == s[l])
	{
		return (p(s, l - 1, i + 1));
	}
	if (s[i] != s[l])
	{
		return (0);
	}
	return (1);
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: val
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s) - 1;

	return (p(s, len, i));
}
