#include "main.h"

/**
 * _strcmp - comparison
 * @s1: char
 * @s2: char
 * Return: val
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		s1[i] == s2[i];
	}
	return (s1 - s2);
}
