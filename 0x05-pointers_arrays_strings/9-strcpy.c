#include "main.h"
#include<string.h>

/**
 * *_strcpy - entry
 * @dest: char
 * @@src: char
 * Return: val
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] <= '\0'; i++)
	{
		*dest = src[i];
	}
	return (dest);
}
