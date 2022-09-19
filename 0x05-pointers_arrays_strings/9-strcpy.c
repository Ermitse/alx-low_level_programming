#include "main.h"
#include<string.h>

/**
 * *_strcpy - entry
 * @dest: char
 * @src: char
 * Return: val
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
