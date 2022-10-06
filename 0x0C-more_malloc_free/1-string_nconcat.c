#include "main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatenation
 * @s1: char
 * @s2: char
 * @n: int
 * Return: ret val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int z1, z2, i;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (z1 = 0; s1[z1] != '\0'; z1++)
	{
	}
	for (z2 = 0; s2[z2] != '\0'; z2++)
	{
	}
	if (n > z2)
	{
		n = z2;
	}
	m = malloc(sizeof(char) * (z1 + n + 1));
	if (m == 0)
	{
		return (NULL);
	}

	for (i = 0; i < z1; i++)
	{
		m[i] = s1[i];
	}

	for (; i < (z1 + n); i++)
	{
		m[i] = s2[i - z1];
	}
	m[i] = '\0';
	return (m);
}
