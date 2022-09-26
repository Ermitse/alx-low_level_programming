#include "main.h"

/**
 * _strspn - locate char in str
 * @s: char point
 * @accept: contains list of char match wiz c
 * Return: ret val
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
