#include "main.h"

/**
 * _strstr - find substring
 * @haystack: string
 * @needle: find
 * Return: ret val
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *needle != '\0'; needle++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (*needle == haystack[i])
				return (needle);
		}
	}
	return (0);
}
