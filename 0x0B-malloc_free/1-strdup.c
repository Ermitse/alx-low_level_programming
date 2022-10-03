#include "main.h"
#include<stdlib.h>
/**
 * _strdup - ret pointer
 * @str: char
 * Return: ret val
 */
char *_strdup(char *str)
{
	 char *s;
	 int i, j;

	if (str == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(*s) * (i + 1));
	if (s == '\0')
		return (\0);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
